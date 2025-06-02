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

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QPushButton* playPauseButton;
    playMode currentMode;
    QListWidget* musicList;
    QPushButton* nextButton;
    QPushButton* prevButton;
    QString filePath;

    void initMediaPlay();
    void loadSong();
    void initUi();
    void musicLogic();
    void musicModeChange();
    void loadMusic();
    void playNextPrevSong();
};
#endif // MAINWINDOW_H
