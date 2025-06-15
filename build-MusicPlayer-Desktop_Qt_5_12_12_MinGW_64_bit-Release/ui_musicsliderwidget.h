/********************************************************************************
** Form generated from reading UI file 'musicsliderwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICSLIDERWIDGET_H
#define UI_MUSICSLIDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "slider.h"

QT_BEGIN_NAMESPACE

class Ui_MusicSliderWidget
{
public:
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    Slider *slider;
    QLabel *label_sumTime;
    QLabel *label_curTime;

    void setupUi(QWidget *MusicSliderWidget)
    {
        if (MusicSliderWidget->objectName().isEmpty())
            MusicSliderWidget->setObjectName(QString::fromUtf8("MusicSliderWidget"));
        MusicSliderWidget->resize(556, 71);
        frame = new QFrame(MusicSliderWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(60, 20, 448, 30));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        slider = new Slider(frame);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setStyleSheet(QString::fromUtf8("QSlider {\n"
"    min-height: 20px;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    border: none;\n"
"    height: 6px;\n"
"    background: #DADCDF;\n"
"    margin: 0px;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: white;\n"
"    border: 2px solid #FC3D4D;\n"
"	border: 1px solid #DADCDF;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: -6px 0;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #FC3D4D;\n"
"    border-radius: 3px;\n"
"}\n"
""));
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slider);

        label_sumTime = new QLabel(MusicSliderWidget);
        label_sumTime->setObjectName(QString::fromUtf8("label_sumTime"));
        label_sumTime->setGeometry(QRect(508, 20, 50, 30));
        label_sumTime->setMinimumSize(QSize(50, 0));
        label_sumTime->setMaximumSize(QSize(50, 16777215));
        label_curTime = new QLabel(MusicSliderWidget);
        label_curTime->setObjectName(QString::fromUtf8("label_curTime"));
        label_curTime->setGeometry(QRect(10, 20, 50, 30));
        label_curTime->setMinimumSize(QSize(50, 0));
        label_curTime->setMaximumSize(QSize(50, 16777215));

        retranslateUi(MusicSliderWidget);

        QMetaObject::connectSlotsByName(MusicSliderWidget);
    } // setupUi

    void retranslateUi(QWidget *MusicSliderWidget)
    {
        MusicSliderWidget->setWindowTitle(QApplication::translate("MusicSliderWidget", "Form", nullptr));
        label_sumTime->setText(QApplication::translate("MusicSliderWidget", "03:00", nullptr));
        label_curTime->setText(QApplication::translate("MusicSliderWidget", "00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MusicSliderWidget: public Ui_MusicSliderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICSLIDERWIDGET_H
