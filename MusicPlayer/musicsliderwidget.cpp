#include "musicsliderwidget.h"
#include "ui_musicsliderwidget.h"
#include "slider.h"
#include <QDebug>
#include <QMouseEvent>
MusicSliderWidget::MusicSliderWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MusicSliderWidget)
{
    ui->setupUi(this);
    setSumTime(0);
    setCurTime(0);



    connect(ui->slider, &Slider::sliderPressed, this, [this](){
        _moving = true;
    });

    connect(ui->slider, &Slider::sliderMoved, this, [=](int position){
        ui->label_curTime->setText(changeTimeToString(position));
    });

    connect(ui->slider, &Slider::sliderReleased, this, [=](){
        _moving = false;
        qint64 position = ui->slider->value();
        ui->label_curTime->setText(changeTimeToString(position));
        emit changeTime(position);
    });

    connect(ui->slider, &Slider::sliderClicked, this, [=](int position){
        ui->label_curTime->setText(changeTimeToString(position));
        emit changeTime(position);
    });
}

MusicSliderWidget::~MusicSliderWidget()
{
    delete ui;
}

void MusicSliderWidget::setSumTime(qint64 sumTime)
{
    ui->label_sumTime->setText(changeTimeToString(sumTime));
    ui->slider->setMaximum(sumTime);
    ui->slider->setMinimum(0);
    ui->slider->setValue(0);
}

void MusicSliderWidget::setCurTime(qint64 curTime)
{
    if(_moving){
        return;
    }
    if(abs(curTime - ui->slider->value()) > 500){
        ui->label_curTime->setText(changeTimeToString(curTime));
        ui->slider->setValue(curTime);
    }
}

QString MusicSliderWidget::changeTimeToString(qint64 time)
{
    int min = time / 1000 / 60;
    int sec = time / 1000 % 60;
    return QString::asprintf("%02d:%02d", min, sec);
}
