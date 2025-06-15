/********************************************************************************
** Form generated from reading UI file 'newcourieritem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCOURIERITEM_H
#define UI_NEWCOURIERITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewCourierItem
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *MusicName;
    QLabel *labMusicLog;
    QLabel *labMusicNum;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *MusicAuthor;
    QSpacerItem *horizontalSpacer_2;
    QLabel *MusicAlbum;
    QSpacerItem *horizontalSpacer_3;
    QLabel *MusicTimer;
    QWidget *widMusicPic;

    void setupUi(QWidget *NewCourierItem)
    {
        if (NewCourierItem->objectName().isEmpty())
            NewCourierItem->setObjectName(QString::fromUtf8("NewCourierItem"));
        NewCourierItem->resize(827, 81);
        layoutWidget = new QWidget(NewCourierItem);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 29, 151, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MusicName = new QLabel(layoutWidget);
        MusicName->setObjectName(QString::fromUtf8("MusicName"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MusicName->sizePolicy().hasHeightForWidth());
        MusicName->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        MusicName->setFont(font);

        horizontalLayout->addWidget(MusicName);

        labMusicLog = new QLabel(layoutWidget);
        labMusicLog->setObjectName(QString::fromUtf8("labMusicLog"));
        labMusicLog->setMinimumSize(QSize(22, 17));
        labMusicLog->setMaximumSize(QSize(22, 17));
        labMusicLog->setFont(font);
        labMusicLog->setPixmap(QPixmap(QString::fromUtf8(":/images/NewMusic/sq2.png")));
        labMusicLog->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(labMusicLog);

        labMusicNum = new QLabel(NewCourierItem);
        labMusicNum->setObjectName(QString::fromUtf8("labMusicNum"));
        labMusicNum->setGeometry(QRect(40, 29, 16, 17));
        labMusicNum->setFont(font);
        labMusicNum->setAlignment(Qt::AlignCenter);
        layoutWidget_2 = new QWidget(NewCourierItem);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(440, 29, 363, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        MusicAuthor = new QLabel(layoutWidget_2);
        MusicAuthor->setObjectName(QString::fromUtf8("MusicAuthor"));
        MusicAuthor->setFont(font);

        horizontalLayout_2->addWidget(MusicAuthor);

        horizontalSpacer_2 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        MusicAlbum = new QLabel(layoutWidget_2);
        MusicAlbum->setObjectName(QString::fromUtf8("MusicAlbum"));
        MusicAlbum->setFont(font);

        horizontalLayout_2->addWidget(MusicAlbum);

        horizontalSpacer_3 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        MusicTimer = new QLabel(layoutWidget_2);
        MusicTimer->setObjectName(QString::fromUtf8("MusicTimer"));
        MusicTimer->setFont(font);

        horizontalLayout_2->addWidget(MusicTimer);

        widMusicPic = new QWidget(NewCourierItem);
        widMusicPic->setObjectName(QString::fromUtf8("widMusicPic"));
        widMusicPic->setGeometry(QRect(71, 10, 60, 60));
        widMusicPic->setMinimumSize(QSize(60, 60));
        widMusicPic->setMaximumSize(QSize(60, 60));

        retranslateUi(NewCourierItem);

        QMetaObject::connectSlotsByName(NewCourierItem);
    } // setupUi

    void retranslateUi(QWidget *NewCourierItem)
    {
        NewCourierItem->setWindowTitle(QApplication::translate("NewCourierItem", "Form", nullptr));
        MusicName->setText(QApplication::translate("NewCourierItem", "MusicName", nullptr));
        labMusicLog->setText(QString());
        labMusicNum->setText(QApplication::translate("NewCourierItem", "01", nullptr));
        MusicAuthor->setText(QApplication::translate("NewCourierItem", "MusicAuthor", nullptr));
        MusicAlbum->setText(QApplication::translate("NewCourierItem", "MusicAlbum", nullptr));
        MusicTimer->setText(QApplication::translate("NewCourierItem", "MusicTimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewCourierItem: public Ui_NewCourierItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCOURIERITEM_H
