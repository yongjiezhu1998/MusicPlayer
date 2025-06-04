#include "slider.h"
#include <QDebug>
#include <QMouseEvent>
Slider::Slider(QWidget *parent)
    :QSlider(parent)
{
    qDebug() << "slider 初始化";
}

/*
 * @brife:实现点击条状功能
*/
void Slider::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "mousePressEvent";
    int pos = event->pos().x() * maximum() / width(); // 计算点击位置比例
    setValue(pos);  //直接跳转
    emit sliderReleased();  // 手动出发释放信号
    QSlider::mousePressEvent(event); // 重写时调用基类实现，避免事件链中断，无法实现拖动调整进度条
}

void Slider::mouseReleaseEvent(QMouseEvent *event)
{
    if(_isPressed){
        if (this->orientation() == Qt::Horizontal){
            int cur = event->x();
            int p_x = _pressedPoint.x();
            if (abs(cur - p_x) < 3){
                double len = width();
                qint64 max = maximum();
                emit sliderClicked(max * (p_x / len));
            }
        } else {
            int cur = event->y();
            int p_y = _pressedPoint.y();
            if (abs(cur - p_y) < 3){
                double len = height();
                qint64 max = maximum();
                emit sliderClicked(max * ((len - p_y) / len));
            }
        }
    }
    QSlider::mouseReleaseEvent(event);
}
