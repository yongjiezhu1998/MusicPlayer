#include "mainwindow.h"
#include "LoadFileQss.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoadFileQss::setStyle("./Allthe.qss"); //加载qss 样式表，用静态方式
    MainWindow w;
    w.show();
    return a.exec();
}
