#-------------------------------------------------
#
# Project created by QtCreator 2016-12-02T23:27:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = restaurante_de_jah
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow_login.cpp \
    product.cpp \
    bill.cpp \
    billitem.cpp \
    client.cpp \
    table.cpp \
    sharedbill.cpp \
    mainwindow_mainhall.cpp \
    restaurant.cpp \
    mainwindow_table.cpp \
    mythread_01.cpp \
    thread_loop.cpp

HEADERS  += mainwindow_login.h \
    product.h \
    bill.h \
    billitem.h \
    client.h \
    table.h \
    sharedbill.h \
    mainwindow_mainhall.h \
    restaurant.h \
    mainwindow_table.h \
    mythread_01.h \
    thread_loop.h

FORMS    += mainwindow_login.ui \
    mainwindow_mainhall.ui \
    mainwindow_table.ui
