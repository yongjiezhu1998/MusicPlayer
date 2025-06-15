/********************************************************************************
** Form generated from reading UI file 'newcourier.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCOURIER_H
#define UI_NEWCOURIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewCourier
{
public:
    QListWidget *listAll;

    void setupUi(QWidget *NewCourier)
    {
        if (NewCourier->objectName().isEmpty())
            NewCourier->setObjectName(QString::fromUtf8("NewCourier"));
        NewCourier->resize(815, 421);
        listAll = new QListWidget(NewCourier);
        listAll->setObjectName(QString::fromUtf8("listAll"));
        listAll->setGeometry(QRect(10, 10, 791, 401));

        retranslateUi(NewCourier);

        QMetaObject::connectSlotsByName(NewCourier);
    } // setupUi

    void retranslateUi(QWidget *NewCourier)
    {
        NewCourier->setWindowTitle(QApplication::translate("NewCourier", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewCourier: public Ui_NewCourier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCOURIER_H
