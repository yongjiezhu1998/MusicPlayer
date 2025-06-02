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

#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      currentMode(ORDER_MODE),
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initUi();

    initMediaPlay();

    loadMusic();

    musicModeChange();

    playNextPrevSong();

    musicLogic();


}

MainWindow::~MainWindow()
{
    delete ui;
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
    playPauseButton =  ui->pushButton_playPause;
    playPauseButton->setIcon(QIcon("F:\\MusicPlayer\\MusicPlayer\\image\\btn_pausing.png"));

    nextButton = ui->pushButton_nextSong;
    nextButton->setIcon(QIcon(":/image/image/btn_playNext_100.png"));
    prevButton = ui->pushButton_prevSong;
    prevButton->setIcon(QIcon(":/image/image/btn_playPrev_100.png"));

    musicList = ui->musicList;
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
            loadSong();
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


