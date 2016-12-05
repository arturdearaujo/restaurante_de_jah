#ifndef MYTHREAD_01_H
#define MYTHREAD_01_H
#include <QtCore>
#include <QThread>

#include "mainwindow_login.h"
#include "mainwindow_mainhall.h"
#include "mainwindow_table.h"

class MyThread_01 : public QThread
{
    Q_OBJECT
public:
    explicit MyThread_01(QObject *parent = 0);
    ~MyThread_01();
    void run(QApplication *arg, MainWindow_MainHall *arg_hall1,
             MainWindow_MainHall *arg_hall2,
             MainWindow_MainHall *arg_hall3,
             MainWindow_MainHall *arg_hall4,
             bool spot01,
             bool spot02,
             bool spot03,
             bool spot04);
    bool stop;

signals:
    void numberChanged();

public slots:

};

#endif // MYTHREAD_01_H
