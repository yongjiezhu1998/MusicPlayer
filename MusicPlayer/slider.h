#ifndef SLIDER_H
#define SLIDER_H

#include <QObject>
#include <QSlider>

class Slider : public QSlider
{
    Q_OBJECT
public:
    explicit Slider(QWidget *parent = nullptr);

    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
signals:
    void sliderClicked(qint64 pos);
private:
    QPoint _pressedPoint;
    bool _isPressed;
};

#endif // SLIDER_H
