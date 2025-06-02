/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_cover;
    QListWidget *musicList;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_prevSong;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_playPause;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_nextSong;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_playMode;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_cover = new QLabel(centralwidget);
        label_cover->setObjectName(QString::fromUtf8("label_cover"));
        label_cover->setGeometry(QRect(40, 470, 61, 61));
        musicList = new QListWidget(centralwidget);
        musicList->setObjectName(QString::fromUtf8("musicList"));
        musicList->setGeometry(QRect(510, 30, 256, 341));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 460, 391, 81));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_prevSong = new QPushButton(widget);
        pushButton_prevSong->setObjectName(QString::fromUtf8("pushButton_prevSong"));
        pushButton_prevSong->setIconSize(QSize(66, 66));

        horizontalLayout->addWidget(pushButton_prevSong);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_playPause = new QPushButton(widget);
        pushButton_playPause->setObjectName(QString::fromUtf8("pushButton_playPause"));
        pushButton_playPause->setIconSize(QSize(66, 66));

        horizontalLayout->addWidget(pushButton_playPause);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_nextSong = new QPushButton(widget);
        pushButton_nextSong->setObjectName(QString::fromUtf8("pushButton_nextSong"));
        pushButton_nextSong->setIconSize(QSize(66, 66));

        horizontalLayout->addWidget(pushButton_nextSong);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_playMode = new QPushButton(widget);
        pushButton_playMode->setObjectName(QString::fromUtf8("pushButton_playMode"));
        pushButton_playMode->setIconSize(QSize(66, 66));

        horizontalLayout->addWidget(pushButton_playMode);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_cover->setText(QString());
        pushButton_prevSong->setText(QString());
        pushButton_playPause->setText(QString());
        pushButton_nextSong->setText(QString());
        pushButton_playMode->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
