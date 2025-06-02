#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QPushButton>
#include <QListWidget>

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


    void initMediaPlay();
    void loadSong();
    void initUi();
    void musicLogic();
    void musicModeChange();
    void loadMusic();
    void playNextPrevSong();
    QString formatTime(qint64 milliseconds);
    bool eventFilter(QObject *obj, QEvent *event);
};
#endif // MAINWINDOW_H
