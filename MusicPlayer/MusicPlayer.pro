QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    eq.cpp \
    main.cpp \
    mainwindow.cpp \
    musicsliderwidget.cpp \
    newcourier.cpp \
    newcourieritem.cpp \
    newdisc.cpp \
    picturebutton.cpp \
    pictureitem.cpp \
    pictureview.cpp \
    picturewidget.cpp \
    slider.cpp

HEADERS += \
    LoadFileQss.h \
    eq.h \
    mainwindow.h \
    musicsliderwidget.h \
    newcourier.h \
    newcourieritem.h \
    newdisc.h \
    picturebutton.h \
    pictureitem.h \
    pictureview.h \
    picturewidget.h \
    slider.h

FORMS += \
    eq.ui \
    mainwindow.ui \
    musicsliderwidget.ui \
    newcourier.ui \
    newcourieritem.ui \
    newdisc.ui \
    picturewidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc

INCLUDEPATH += E:/ffmpeg/include
LIBS += -LE:/ffmpeg/lib -lavcodec -lavformat -lavutil -lswresample

DISTFILES += \
    Allthe.qss
