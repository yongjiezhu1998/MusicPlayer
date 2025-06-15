/********************************************************************************
** Form generated from reading UI file 'picturewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTUREWIDGET_H
#define UI_PICTUREWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "picturebutton.h"
#include "pictureview.h"

QT_BEGIN_NAMESPACE

class Ui_PictureWidget
{
public:
    QPushButton *btnL;
    QPushButton *btnR;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    pictureView *graphicsView_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    pictureButton *btnPic0_2;
    pictureButton *btnPic1_2;
    pictureButton *btnPic2_2;
    pictureButton *btnPic3_2;
    pictureButton *btnPic4_2;
    pictureButton *btnPic5_2;
    pictureButton *btnPic6_2;
    pictureButton *btnPic7_2;
    pictureButton *btnPic8_2;
    pictureButton *btnPic9_2;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *PictureWidget)
    {
        if (PictureWidget->objectName().isEmpty())
            PictureWidget->setObjectName(QString::fromUtf8("PictureWidget"));
        PictureWidget->resize(778, 244);
        btnL = new QPushButton(PictureWidget);
        btnL->setObjectName(QString::fromUtf8("btnL"));
        btnL->setGeometry(QRect(31, 91, 25, 25));
        btnR = new QPushButton(PictureWidget);
        btnR->setObjectName(QString::fromUtf8("btnR"));
        btnR->setGeometry(QRect(721, 91, 25, 25));
        layoutWidget = new QWidget(PictureWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 761, 225));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        graphicsView_2 = new pictureView(layoutWidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));

        verticalLayout_2->addWidget(graphicsView_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnPic0_2 = new pictureButton(layoutWidget);
        btnPic0_2->setObjectName(QString::fromUtf8("btnPic0_2"));

        horizontalLayout_2->addWidget(btnPic0_2);

        btnPic1_2 = new pictureButton(layoutWidget);
        btnPic1_2->setObjectName(QString::fromUtf8("btnPic1_2"));

        horizontalLayout_2->addWidget(btnPic1_2);

        btnPic2_2 = new pictureButton(layoutWidget);
        btnPic2_2->setObjectName(QString::fromUtf8("btnPic2_2"));

        horizontalLayout_2->addWidget(btnPic2_2);

        btnPic3_2 = new pictureButton(layoutWidget);
        btnPic3_2->setObjectName(QString::fromUtf8("btnPic3_2"));

        horizontalLayout_2->addWidget(btnPic3_2);

        btnPic4_2 = new pictureButton(layoutWidget);
        btnPic4_2->setObjectName(QString::fromUtf8("btnPic4_2"));

        horizontalLayout_2->addWidget(btnPic4_2);

        btnPic5_2 = new pictureButton(layoutWidget);
        btnPic5_2->setObjectName(QString::fromUtf8("btnPic5_2"));

        horizontalLayout_2->addWidget(btnPic5_2);

        btnPic6_2 = new pictureButton(layoutWidget);
        btnPic6_2->setObjectName(QString::fromUtf8("btnPic6_2"));

        horizontalLayout_2->addWidget(btnPic6_2);

        btnPic7_2 = new pictureButton(layoutWidget);
        btnPic7_2->setObjectName(QString::fromUtf8("btnPic7_2"));

        horizontalLayout_2->addWidget(btnPic7_2);

        btnPic8_2 = new pictureButton(layoutWidget);
        btnPic8_2->setObjectName(QString::fromUtf8("btnPic8_2"));

        horizontalLayout_2->addWidget(btnPic8_2);

        btnPic9_2 = new pictureButton(layoutWidget);
        btnPic9_2->setObjectName(QString::fromUtf8("btnPic9_2"));

        horizontalLayout_2->addWidget(btnPic9_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(PictureWidget);

        QMetaObject::connectSlotsByName(PictureWidget);
    } // setupUi

    void retranslateUi(QWidget *PictureWidget)
    {
        PictureWidget->setWindowTitle(QApplication::translate("PictureWidget", "Form", nullptr));
        btnL->setText(QString());
        btnR->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PictureWidget: public Ui_PictureWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTUREWIDGET_H
