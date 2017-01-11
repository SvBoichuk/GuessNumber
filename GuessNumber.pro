#-------------------------------------------------
#
# Project created by QtCreator 2017-01-11T16:28:30
#
#-------------------------------------------------

QT       += core gui sql
CONFIG   += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GuessNumber
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    player.cpp \
    playersdatabase.cpp

HEADERS  += mainwindow.h \
    player.h \
    playersdatabase.h \
    someconstants.h

FORMS    += mainwindow.ui
