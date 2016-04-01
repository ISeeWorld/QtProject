#-------------------------------------------------
#
# Project created by QtCreator 2016-03-20T19:55:00
#
#-------------------------------------------------

QT       += core gui network  core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IpHelper
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp

HEADERS  += dialog.h

FORMS    += dialog.ui

RC_FILE +=ico.rc
