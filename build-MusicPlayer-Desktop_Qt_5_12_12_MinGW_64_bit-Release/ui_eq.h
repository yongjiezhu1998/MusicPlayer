/********************************************************************************
** Form generated from reading UI file 'eq.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQ_H
#define UI_EQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "slider.h"

QT_BEGIN_NAMESPACE

class Ui_Eq
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    Slider *slider_63;
    QLabel *label_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    Slider *slider_125;
    QLabel *label_3;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    Slider *slider_250;
    QLabel *label_4;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    Slider *slider_500;
    QLabel *label_5;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_6;
    Slider *slider_1k;
    QLabel *label_6;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_7;
    Slider *slider_2k;
    QLabel *label_7;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_8;
    Slider *slider_4k;
    QLabel *label_8;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_9;
    Slider *slider_8k;
    QLabel *label_9;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_10;
    Slider *slider_40;
    QLabel *label_10;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    Slider *slider_31;
    QLabel *label;

    void setupUi(QWidget *Eq)
    {
        if (Eq->objectName().isEmpty())
            Eq->setObjectName(QString::fromUtf8("Eq"));
        Eq->resize(620, 300);
        layoutWidget = new QWidget(Eq);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 50, 32, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        slider_63 = new Slider(layoutWidget);
        slider_63->setObjectName(QString::fromUtf8("slider_63"));
        slider_63->setMinimumSize(QSize(30, 0));
        slider_63->setMaximumSize(QSize(30, 16777215));
        slider_63->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    border: none;\n"
"    width: 10px;\n"
"	background: rgb(252, 61, 81);\n"
"    margin: 0px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: white;\n"
"    border: 2px solid #FC3D4D;\n"
"    border: 1px solid #DADCDF;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: 0 -6px;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"	background: #DADCDF;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        slider_63->setMaximum(100);
        slider_63->setValue(30);
        slider_63->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(slider_63);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        layoutWidget_2 = new QWidget(Eq);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(170, 50, 32, 191));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        slider_125 = new Slider(layoutWidget_2);
        slider_125->setObjectName(QString::fromUtf8("slider_125"));
        slider_125->setMinimumSize(QSize(30, 0));
        slider_125->setMaximumSize(QSize(30, 16777215));
        slider_125->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    border: none;\n"
"    width: 10px;\n"
"	background: rgb(252, 61, 81);\n"
"    margin: 0px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: white;\n"
"    border: 2px solid #FC3D4D;\n"
"    border: 1px solid #DADCDF;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: 0 -6px;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"	background: #DADCDF;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        slider_125->setMaximum(100);
        slider_125->setValue(30);
        slider_125->setOrientation(Qt::Vertical);

        verticalLayout_3->addWidget(slider_125);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        layoutWidget_3 = new QWidget(Eq);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(230, 50, 32, 191));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        slider_250 = new Slider(layoutWidget_3);
        slider_250->setObjectName(QString::fromUtf8("slider_250"));
        slider_250->setMinimumSize(QSize(30, 0));
        slider_250->setMaximumSize(QSize(30, 16777215));
        slider_250->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    border: none;\n"
"    width: 10px;\n"
"	background: rgb(252, 61, 81);\n"
"    margin: 0px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: white;\n"
"    border: 2px solid #FC3D4D;\n"
"    border: 1px solid #DADCDF;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: 0 -6px;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"	background: #DADCDF;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        slider_250->setMaximum(100);
        slider_250->setValue(30);
        slider_250->setOrientation(Qt::Vertical);

        verticalLayout_4->addWidget(slider_250);

        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        layoutWidget_4 = new QWidget(Eq);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(290, 50, 32, 191));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        slider_500 = new Slider(layoutWidget_4);
        slider_500->setObjectName(QString::fromUtf8("slider_500"));
        slider_500->setMinimumSize(QSize(30, 0));
        slider_500->setMaximumSize(QSize(30, 16777215));
        slider_500->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    border: none;\n"
"    width: 10px;\n"
"	background: rgb(252, 61, 81);\n"
"    margin: 0px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: white;\n"
"    border: 2px solid #FC3D4D;\n"
"    border: 1px solid #DADCDF;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: 0 -6px;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"	background: #DADCDF;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        slider_500->setMaximum(100);
        slider_500->setValue(30);
        slider_500->setOrientation(Qt::Vertical);

        verticalLayout_5->addWidget(slider_500);

        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        layoutWidget_5 = new QWidget(Eq);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(350, 50, 32, 191));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        slider_1k = new Slider(layoutWidget_5);
        slider_1k->setObjectName(QString::fromUtf8("slider_1k"));
        slider_1k->setMinimumSize(QSize(30, 0));
        slider_1k->setMaximumSize(QSize(30, 16777215));
        slider_1k->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    border: none;\n"
"    width: 10px;\n"
"	background: rgb(252, 61, 81);\n"
"    margin: 0px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: white;\n"
"    border: 2px solid #FC3D4D;\n"
"    border: 1px solid #DADCDF;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: 0 -6px;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"	background: #DADCDF;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        slider_1k->setMaximum(100);
        slider_1k->setValue(30);
        slider_1k->setOrientation(Qt::Vertical);

        verticalLayout_6->addWidget(slider_1k);

        label_6 = new QLabel(layoutWidget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        layoutWidget_6 = new QWidget(Eq);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(410, 50, 32, 191));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        slider_2k = new Slider(layoutWidget_6);
        slider_2k->setObjectName(QString::fromUtf8("slider_2k"));
        slider_2k->setMinimumSize(QSize(30, 0));
        slider_2k->setMaximumSize(QSize(30, 16777215));
        slider_2k->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    border: none;\n"
"    width: 10px;\n"
"	background: rgb(252, 61, 81);\n"
"    margin: 0px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: white;\n"
"    border: 2px solid #FC3D4D;\n"
"    border: 1px solid #DADCDF;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: 0 -6px;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"	background: #DADCDF;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        slider_2k->setMaximum(100);
        slider_2k->setValue(30);
        slider_2k->setOrientation(Qt::Vertical);

        verticalLayout_7->addWidget(slider_2k);

        label_7 = new QLabel(layoutWidget_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_7->addWidget(label_7);

        layoutWidget_7 = new QWidget(Eq);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(470, 50, 32, 191));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        slider_4k = new Slider(layoutWidget_7);
        slider_4k->setObjectName(QString::fromUtf8("slider_4k"));
        slider_4k->setMinimumSize(QSize(30, 0));
        slider_4k->setMaximumSize(QSize(30, 16777215));
        slider_4k->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    border: none;\n"
"    width: 10px;\n"
"	background: rgb(252, 61, 81);\n"
"    margin: 0px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: white;\n"
"    border: 2px solid #FC3D4D;\n"
"    border: 1px solid #DADCDF;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: 0 -6px;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"	background: #DADCDF;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        slider_4k->setMaximum(100);
        slider_4k->setValue(30);
        slider_4k->setOrientation(Qt::Vertical);

        verticalLayout_8->addWidget(slider_4k);

        label_8 = new QLabel(layoutWidget_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_8->addWidget(label_8);

        layoutWidget_8 = new QWidget(Eq);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(520, 50, 32, 191));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        slider_8k = new Slider(layoutWidget_8);
        slider_8k->setObjectName(QString::fromUtf8("slider_8k"));
        slider_8k->setMinimumSize(QSize(30, 0));
        slider_8k->setMaximumSize(QSize(30, 16777215));
        slider_8k->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    border: none;\n"
"    width: 10px;\n"
"	background: rgb(252, 61, 81);\n"
"    margin: 0px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: white;\n"
"    border: 2px solid #FC3D4D;\n"
"    border: 1px solid #DADCDF;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: 0 -6px;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"	background: #DADCDF;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        slider_8k->setMaximum(100);
        slider_8k->setValue(30);
        slider_8k->setOrientation(Qt::Vertical);

        verticalLayout_9->addWidget(slider_8k);

        label_9 = new QLabel(layoutWidget_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_9->addWidget(label_9);

        layoutWidget_9 = new QWidget(Eq);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(570, 50, 32, 191));
        verticalLayout_10 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        slider_40 = new Slider(layoutWidget_9);
        slider_40->setObjectName(QString::fromUtf8("slider_40"));
        slider_40->setMinimumSize(QSize(30, 0));
        slider_40->setMaximumSize(QSize(30, 16777215));
        slider_40->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    border: none;\n"
"    width: 10px;\n"
"	background: rgb(252, 61, 81);\n"
"    margin: 0px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: white;\n"
"    border: 2px solid #FC3D4D;\n"
"    border: 1px solid #DADCDF;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: 0 -6px;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"	background: #DADCDF;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        slider_40->setMaximum(100);
        slider_40->setValue(30);
        slider_40->setOrientation(Qt::Vertical);

        verticalLayout_10->addWidget(slider_40);

        label_10 = new QLabel(layoutWidget_9);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_10->addWidget(label_10);

        widget = new QWidget(Eq);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 50, 32, 191));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        slider_31 = new Slider(widget);
        slider_31->setObjectName(QString::fromUtf8("slider_31"));
        slider_31->setMinimumSize(QSize(30, 0));
        slider_31->setMaximumSize(QSize(30, 16777215));
        slider_31->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    border: none;\n"
"    width: 10px;\n"
"	background: rgb(252, 61, 81);\n"
"    margin: 0px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: white;\n"
"    border: 2px solid #FC3D4D;\n"
"    border: 1px solid #DADCDF;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: 0 -6px;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"	background: #DADCDF;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        slider_31->setMaximum(100);
        slider_31->setValue(30);
        slider_31->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(slider_31);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        retranslateUi(Eq);

        QMetaObject::connectSlotsByName(Eq);
    } // setupUi

    void retranslateUi(QWidget *Eq)
    {
        Eq->setWindowTitle(QApplication::translate("Eq", "Form", nullptr));
        label_2->setText(QApplication::translate("Eq", "63", nullptr));
        label_3->setText(QApplication::translate("Eq", "125", nullptr));
        label_4->setText(QApplication::translate("Eq", "250", nullptr));
        label_5->setText(QApplication::translate("Eq", "500", nullptr));
        label_6->setText(QApplication::translate("Eq", "1k", nullptr));
        label_7->setText(QApplication::translate("Eq", "2k", nullptr));
        label_8->setText(QApplication::translate("Eq", "4k", nullptr));
        label_9->setText(QApplication::translate("Eq", "8k", nullptr));
        label_10->setText(QApplication::translate("Eq", "16k", nullptr));
        label->setText(QApplication::translate("Eq", "31", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eq: public Ui_Eq {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQ_H
