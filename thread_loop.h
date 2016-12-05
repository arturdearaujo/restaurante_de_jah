#ifndef THREAD_LOOP_H
#define THREAD_LOOP_H

#include <QObject>
#include <QThread>
#include "mainwindow_login.h"
#include "mainwindow_mainhall.h"

class Thread_loop : public QThread
{
    Q_OBJECT
public:
    explicit Thread_loop(QObject *parent = 0);
    ~Thread_loop();
    void run();
    bool stop;

signals:
    void numberChanged ();

public slots:

};

#endif // THREAD_LOOP_H
