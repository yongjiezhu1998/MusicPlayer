#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QPushButton>
#include <QListWidget>

#include "picturewidget.h"
#include "newcourier.h"
#include "newdisc.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum playMode
{
    ORDER_MODE,
    RANDOM_MODE,
    CYCLE_MODE,
};

enum volumnState
{
    MUTE,
    UNMUTE,
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void handleMusicPositionChanged(qint64 position);
    void handleDurationChanged(qint64 duration);
    void volumnControl();
    void updateLyrics(qint64 position);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QPushButton* playPauseButton;
    playMode currentMode;
    volumnState volumnState;
    QListWidget* musicList;
    QPushButton* nextButton;
    QPushButton* prevButton;
    QString filePath;
    QWidget* volumnWidget;
    QPushButton* volumnButton;
    QSlider* volumnSlider;
    int currentVolumn = 30;
    QMap<qint64, QString> lrcMap;
    QMediaPlaylist *playList;
    PictureWidget *pictureWidget;
    NewCourier* pCourier;
    NewDisc* pDisMusic;

    void initMediaPlay();
    void loadSong();
    void initUi();
    void musicLogic();
    void musicModeChange();
    void loadMusic();
    void playNextPrevSong();
    QString formatTime(qint64 milliseconds);
    bool eventFilter(QObject *obj, QEvent *event);
    QMap<qint64, QString> loadLRC();
    void showLrc(qint64 position);
    QString getLyricsPath(const QString &musicPath);
    void setListT1();
    void setListT2();
    void setListT3();
    void setTabWidget();
    void setPictureWall();
    void setAddWidget();
};
#endif // MAINWINDOW_H
