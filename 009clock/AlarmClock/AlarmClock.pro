#-------------------------------------------------
#
# Project created by QtCreator 2016-03-29T19:14:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AlarmClock
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    logindialog.cpp

HEADERS  += widget.h \
    logindialog.h

FORMS    += widget.ui \
    logindialog.ui
RC_FILE +=ico.rc
