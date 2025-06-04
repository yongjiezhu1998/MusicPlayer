#ifndef MUSICSLIDERWIDGET_H
#define MUSICSLIDERWIDGET_H

#include <QWidget>

namespace Ui {
class MusicSliderWidget;
}

class MusicSliderWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MusicSliderWidget(QWidget *parent = nullptr);
    ~MusicSliderWidget();

    void setSumTime(qint64 sumTime);
    void setCurTime(qint64 curTime);
signals:
    void changeTime(qint64 curTime);
private:
    QString changeTimeToString(qint64 time);
private:
    bool _moving = false;
    Ui::MusicSliderWidget *ui;
};

#endif // MUSICSLIDERWIDGET_H
