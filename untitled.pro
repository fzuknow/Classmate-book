#-------------------------------------------------
#
# Project created by QtCreator 2017-11-04T09:17:11
#
#-------------------------------------------------

QT += sql
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled19
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    add.cpp \
    change.cpp \
    delete_stu.cpp \
    select_stu.cpp

HEADERS  += mainwindow.h \
    add.h \
    change.h \
    delete_stu.h \
    select_stu.h

FORMS    += mainwindow.ui \
    add.ui \
    change.ui \
    delete_stu.ui \
    select_stu.ui

RESOURCES += \
    resourse.qrc
