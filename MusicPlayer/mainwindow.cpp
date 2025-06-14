#include <QMediaPlayer>
#include <QAudioOutput>
#include <QAudioFormat>
#include <QAudioDeviceInfo>
#include <QMediaMetaData>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QMessageBox>
#include <time.h>
#include <QTimer>
#include <QMediaPlaylist>
#include <QTimer>
#include <QPropertyAnimation>
#include <QStackedLayout>
//#include <QEqualizerFilter>

#include <libavformat/avformat.h>
#include <libswresample/swresample.h>
#include <libavcodec/avcodec.h>

#include "mainwindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "eq.h"
#include "picturewidget.h"


/*
 * TODO:
 *  - 双击切换音乐 ok
 *  - 歌词与歌曲绑定 ok
 *  - 均衡器
 *  - 专辑封面转动
 *  - 歌词滚动
 *  - 暂停播放缓入缓出
 *  - 歌词和音乐绑定，切割自动波切换
 *  - 用户登录界面（数据库）
*/

/*
 * Learning list:
 *  - lamda表达式 ok
 *  - 各种构造函数
*/


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      currentMode(ORDER_MODE),
      volumnState(UNMUTE),
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 初始化UI
    initUi();

    initMediaPlay();

    loadMusic();

    musicModeChange();

    playNextPrevSong();

    musicLogic();

    connect(player, &QMediaPlayer::mediaChanged, [=](const QMediaContent &media) {
        QString musicPath = media.canonicalUrl().toLocalFile(); // 获取媒体文件的本地路径

        QString lrcPath = getLyricsPath(musicPath);

        if (QFile::exists(lrcPath))
        {
            lrcMap = loadLRC();
            ui->lyricLabel->show();
            qDebug() << "有歌词";
        }
        else
        {
            ui->lyricLabel->hide();
            ui->lyricLabel->setText("未找到歌词文件");
            qDebug() << "无歌词";
        }
    });

    connect(player, &QMediaPlayer::positionChanged, this, &MainWindow::handleMusicPositionChanged);

    connect(player, &QMediaPlayer::durationChanged, this, &MainWindow::handleDurationChanged);

    ui->pushButton_volumn->setIcon(QIcon(":/image/image/btn_Volume.png"));

    // 隐藏音量条
    volumnWidget = ui->widget_volumn;
    volumnWidget->hide();

    // 为按钮安装事件过滤器
    volumnButton = ui->pushButton_volumn;

    volumnButton->installEventFilter(this);
    volumnButton->setAttribute(Qt::WA_Hover);

    connect(ui->slider_volumn, &QSlider::valueChanged, this, [=](int value) {
        player->setVolume(value);
        ui->volume->setText(QString::number(value));
        currentVolumn = value;
    });

    connect(volumnButton, &QPushButton::clicked, this, &MainWindow::volumnControl);


    // 拖动进度条调整播放位置，释放时播放音乐
    connect(ui->slider, &QSlider::sliderReleased, [=]() {
       player->setPosition(ui->slider->value());
    });

    connect(musicList, &QListWidget::itemDoubleClicked, this, [=](QListWidgetItem *item){
        int index = musicList->row(item);

        playList->setCurrentIndex(index);

        player->play();
        playPauseButton->setIcon(QIcon("F:\\MusicPlayer\\MusicPlayer\\image\\btn_playing.png"));
    });




}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * @brife:槽函数，处理音乐播放时进度条变化以及歌词的滚动
*/
void MainWindow::handleMusicPositionChanged(qint64 position)
{
    QSlider *slider = ui->slider;
    slider->setValue(position);

    QString currentTime = formatTime(position);
    ui->label_curTime->setText(currentTime);

    showLrc(position);
}

/*
 * @brife:展示歌词
*/
void MainWindow::showLrc(qint64 position)
{
    auto it = lrcMap.lowerBound(position);

    // 处理第一句歌词的特殊情况
    if (it == lrcMap.begin() && position >= it.key()) {
        // 当前时间处于第一句歌词范围内，直接显示
        ui->lyricLabel->setText(it.value());
    }
    // 处理超过最后一句歌词的情况
    else if (it == lrcMap.end() && !lrcMap.isEmpty()) {
        // 显示最后一句歌词
        auto lastIt = --lrcMap.end();
        ui->lyricLabel->setText(lastIt.value());
    }
    // 正常歌词行处理
    else if (it != lrcMap.end()) {
        // 回退到实际显示的歌词行
        if (it != lrcMap.begin() && it.key() > position) {
            --it;
        }
        ui->lyricLabel->setText(it.value());
    }
    // 无歌词可显示的情况
    else {
        ui->lyricLabel->clear();
    }
}

void MainWindow::handleDurationChanged(qint64 duration)
{
    QSlider *slider = ui->slider;
    slider->setRange(0, duration);
    QString sumTime = formatTime(duration);
    ui->label_sumTime->setText(sumTime);
}

void MainWindow::volumnControl()
{
    if (volumnState == UNMUTE)
    {
        volumnState = MUTE;
        ui->pushButton_volumn->setIcon(QIcon(":/image/image/btn_noVolume.png"));
        player->setVolume(0);
        ui->volume->setText(QString::number(0)+"%");
        volumnSlider->setValue(0);
    }else
    {
        volumnState = UNMUTE;
        ui->pushButton_volumn->setIcon(QIcon(":/image/image/btn_Volume.png"));
        player->setVolume(currentVolumn);
        ui->volume->setText(QString::number(currentVolumn)+"%");
        volumnSlider->setValue(currentVolumn);
    }
}

/*
 * @brife: 更新歌词槽函数
*/
void MainWindow::updateLyrics(qint64 position)
{

}

void MainWindow::initMediaPlay()
{
    // 创建播放器对象
    player = new QMediaPlayer(this);

    QString musicPath = "F:\\MusicPlayer\\MusicPlayer\\music\\一路向北 - 周杰伦.mp3";

    player->setMedia(QUrl::fromLocalFile(musicPath));
}

/*
 * @brife:加载音乐并播放
*/
void MainWindow::loadSong()
{

    QString musicName = ui->musicList->currentItem()->text();

    QString musicNameABS = filePath + "\\" +musicName+".mp3";

    qDebug() << "musicNameABS" << musicNameABS;

    player->setMedia(QUrl::fromLocalFile(musicNameABS));

    player->play();
    playPauseButton->setIcon(QIcon("F:\\MusicPlayer\\MusicPlayer\\image\\btn_playing.png"));

}

/*
 * @brife:初始化ui
*/
void MainWindow::initUi()
{
    // 初始化图标
    QLabel* label = ui->label_title;
    QPixmap pixmap(":/image/image/logo.png");
    pixmap = pixmap.scaled(120,120,Qt::KeepAspectRatio); // 缩放尺寸

    // 设置标签
    label->setPixmap(pixmap);

    // 滚动条相关设计
    setListT1();
    setListT2();
    setListT3();
    // 窗口界面标题
    setTabWidget();

    setPictureWall();

    setAddWidget();


    // 设置软件名称以及图标
    this->setWindowTitle("网易云音乐-beta版");
    this->setWindowIcon(QIcon(":/image/image/windowIcon.png"));


    playPauseButton =  ui->pushButton_playPause;
    playPauseButton->setIcon(QIcon("F:\\MusicPlayer\\MusicPlayer\\image\\btn_pausing.png"));

    nextButton = ui->pushButton_nextSong;
    nextButton->setIcon(QIcon(":/image/image/btn_playNext_100.png"));
    prevButton = ui->pushButton_prevSong;
    prevButton->setIcon(QIcon(":/image/image/btn_playPrev_100.png"));

    musicList = ui->musicList;
}

/*
 * @brife: 滚动条初始化T1
*/
void MainWindow::setListT1()
{
    // 取消滚动条
    ui->listT1_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listT1_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QListWidgetItem *findMusic = new QListWidgetItem(ui->listT1_2);
    findMusic->setText("发现音乐");
    QListWidgetItem *podcast = new QListWidgetItem(ui->listT1_2);
    podcast->setText("播客");
    QListWidgetItem *video = new QListWidgetItem(ui->listT1_2);
    video->setText("视频");
    QListWidgetItem *friends = new QListWidgetItem(ui->listT1_2);
    friends->setText("朋友");
    QListWidgetItem *live = new QListWidgetItem(ui->listT1_2);
    live->setText("直播");
    QListWidgetItem *pcFM = new QListWidgetItem(ui->listT1_2);
    pcFM->setText("私人FM");
}

/*
 * @brife:滚动条初始化T2
*/
void MainWindow::setListT2()
{
    ui->listT2_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listT2_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    QListWidgetItem *localDownload = new QListWidgetItem(ui->listT2_2);
    localDownload->setIcon(QIcon("./images/下载.png"));
    localDownload->setText("本地与下载");

    QListWidgetItem *recentPlay = new QListWidgetItem(ui->listT2_2);
    recentPlay->setIcon(QIcon("./images/最近播放.png"));
    recentPlay->setText("最近播放");

    QListWidgetItem *myMusic = new QListWidgetItem(ui->listT2_2);
    myMusic->setIcon(QIcon("./images/云盘.png"));
    myMusic->setText("我的音乐云盘");

    QListWidgetItem *myPodcast = new QListWidgetItem(ui->listT2_2);
    myPodcast->setIcon(QIcon("./images/播客.png"));
    myPodcast->setText("我的播客");

    QListWidgetItem *myCollect = new QListWidgetItem(ui->listT2_2);
    myCollect->setIcon(QIcon("./images/收藏.png"));
    myCollect->setText("我的收藏");
}

/*
 * @brife:滚动条初始化T3
*/
void MainWindow::setListT3()
{
    ui->listT3_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listT3_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    QListWidgetItem *myLove = new QListWidgetItem(ui->listT3_2);
    myLove->setIcon(QIcon("./images/心.png"));
    myLove->setText("我喜欢的音乐");

}

/*
 * @brife:初始化tablewidget
*/
void MainWindow::setTabWidget()
{
    ui->tabWidget->setTabText(0,"个性推荐");
    ui->tabWidget->setTabText(1,"专属定制");
    ui->tabWidget->setTabText(2,"歌单");
    ui->tabWidget->setTabText(3,"排行榜");
    ui->tabWidget->setTabText(4,"歌手");
    ui->tabWidget->setTabText(5,"最新音乐");
}

/*
 * @brife:初始化照片墙
*/
void MainWindow::setPictureWall()
{
    pictureWidget = new PictureWidget();
    ui->verLout_pic_3->addWidget(pictureWidget);
}

/*
 * @brife:设置歌曲
*/
void MainWindow::setAddWidget()
{
   pCourier = new NewCourier;
   pDisMusic = new NewDisc;
   QStackedLayout *stackedLayout = new QStackedLayout;
   stackedLayout->addWidget(pCourier);
   stackedLayout->addWidget(pDisMusic);
   pCourier->move(0,0);
   ui->verAddWidget_3->addLayout(stackedLayout);
   stackedLayout->setCurrentIndex(0);
}


/*
 * @brife: 音乐播放相关逻辑
*/
void MainWindow::musicLogic()
{
    connect(playPauseButton, &QPushButton::clicked, this, [=]{
        if (player->state() == QMediaPlayer::PausedState || player->state() == QMediaPlayer::StoppedState)
        {
            qDebug() << "开始播放";
            player->play();
            playPauseButton->setIcon(QIcon("F:\\MusicPlayer\\MusicPlayer\\image\\btn_playing.png"));
        }
        else
        {
            qDebug() << "暂停";

            player->pause();
            playPauseButton->setIcon(QIcon("F:\\MusicPlayer\\MusicPlayer\\image\\btn_pausing.png"));
        }
    });
}

/*
 * @brife:音乐模式切换
*/
void MainWindow::musicModeChange()
{
    // 切换播放模式
    QPushButton *playModeButton = ui->pushButton_playMode;
    playModeButton->setIcon(QIcon(":/image/image/btn_Loop_100.png"));

    connect(playModeButton, &QPushButton::clicked, this, [=] {
        if (currentMode == ORDER_MODE)
        {
            currentMode = RANDOM_MODE;
            playModeButton->setIcon(QIcon(":/image/image/btn_Random_100.png"));
        }
        else if (currentMode == RANDOM_MODE)
        {
            currentMode = CYCLE_MODE;
            playModeButton->setIcon(QIcon(":/image/image/btn_CurrentItemInLoop_100.png"));
        }
        else
        {
            currentMode = ORDER_MODE;
            playModeButton->setIcon(QIcon(":/image/image/btn_Loop_100.png"));
        }
    });
}

/*
 * @brife:加载本地音乐
*/
void MainWindow::loadMusic()
{
    filePath = "F:\\MusicPlayer\\MusicPlayer\\music";

    playList = new QMediaPlaylist(player);

    player->setPlaylist(playList);

    QDir dir(filePath);

    if (dir.exists() == false)
    {
        QMessageBox::warning(this, "文件夹", "文件夹不存在");
        return;
    }

    QFileInfoList fileList = dir.entryInfoList(QDir::Files);


    for (auto element : fileList)
    {
        if (element.suffix() == "mp3")
        {
            musicList->addItem(element.baseName());
            QString filePath = element.absoluteFilePath();
            playList->addMedia(QUrl::fromLocalFile(filePath));
        }
    }
}

/*
 * @brife:切换歌曲
*/
void MainWindow::playNextPrevSong()
{


    srand(time(NULL));

    int nextRow = 0;
    int prevRow = 0;

    connect(nextButton, &QPushButton::clicked, this, [=]()mutable{
        int currentRow = musicList->currentRow();
        if (currentMode == ORDER_MODE)
        {
            nextRow = (currentRow + 1) % musicList->count();
        }
        else if (currentMode == RANDOM_MODE)
        {
            nextRow = rand() % musicList->count();
        }
        else
        {
            nextRow = currentRow;
        }

        musicList->setCurrentRow(nextRow);

        loadSong();
    });

    connect(prevButton, &QPushButton::clicked, this, [=]()mutable{
        int currentRow = musicList->currentRow();
        if (currentMode == ORDER_MODE)
        {
            prevRow = currentRow - 1;
            if (prevRow < 0)
            {
                prevRow = musicList->count() - 1;
                qDebug() << "prevRow:" << prevRow;
            }
        }
        else if (currentMode == RANDOM_MODE)
        {
            prevRow = rand() % musicList->count();
        }
        else
        {
            prevRow = currentRow;
        }

        musicList->setCurrentRow(prevRow);

        loadSong();
    });
}

QString MainWindow::formatTime(qint64 milliseconds)
{
    if (milliseconds <= 0) return "00:00";

    qint64 totalSeconds = milliseconds / 1000;
    qint64 minutes = totalSeconds / 60;
    qint64 seconds = totalSeconds % 60;

    // 格式化时间为 mm:ss
    return QString("%1:%2")
        .arg(minutes, 2, 10, QChar('0'))
        .arg(seconds, 2, 10, QChar('0'));
}

bool MainWindow::eventFilter(QObject* obj, QEvent* event) {
    if (obj == volumnButton) {
        if (event->type() == QEvent::Enter) {
            volumnWidget->show();
            return true;
        }
        else if (event->type() == QEvent::Leave) {
            // 延迟300ms隐藏（避免移入音量窗口时立即关闭）
            QTimer::singleShot(300, [this]{
                if (!volumnWidget->underMouse()) volumnWidget->hide();
            });
        }
    }
    return QMainWindow::eventFilter(obj, event);
}

QMap<qint64, QString> MainWindow::loadLRC()
{
    QMap<qint64, QString> lrcMap = {};
    // 读取lrc文件
    QFile file("F:\\MusicPlayer\\MusicPlayer\\music\\林俊杰 - 交换余生.lrc");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return lrcMap;
    }

    QTextStream in(&file);



    // 逐行解析并提取时间标签
    QString line;
    while (!in.atEnd()) {
        line = in.readLine();
        if (!line.startsWith('['))
        {
            continue;
        }

        QRegularExpression re("\\[(\\d{2}:\\d{2}\\.[0-9]{3})\\](.*)");
        QRegularExpressionMatch match = re.match(line);
        if (match.hasMatch()) {
            QString time = match.captured(1);
            QString text = match.captured(2);

            // 将时间字符串拆分为分钟、秒、毫秒
            QStringList parts = time.split(":");
            if (parts.size() < 2) continue;

            bool ok;
            int minutes = parts[0].toInt(&ok);
            if (!ok) continue;

            QStringList secParts = parts[1].split('.');
            if (secParts.size() < 2) continue;

            int seconds = secParts[0].toInt(&ok); // 提取秒
            if (!ok) continue;
            int milliseconds = secParts[1].toInt(&ok); // 提取毫秒
            if (!ok) continue;

            qint64 totalMs = minutes * 60000 + seconds * 1000 + milliseconds;

            lrcMap.insert(totalMs, text);
        }
    }

    file.close();

    return lrcMap;



}


// 获取歌词路径
QString MainWindow::getLyricsPath(const QString &musicPath)
{
    QFileInfo musicInfo(musicPath);
    return musicInfo.absolutePath() + "/" + musicInfo.completeBaseName() + ".lrc";
}

void MainWindow::on_pushButton_clicked()
{
    qDebug() << "打开均衡器";
    Eq *eq = new Eq();
    eq->setAttribute(Qt::WA_DeleteOnClose); // 关闭时自动销毁
    eq->show();
}

