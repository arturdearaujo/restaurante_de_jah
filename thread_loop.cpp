#include "thread_loop.h"
#include "mainwindow_login.h"
#include "mainwindow_mainhall.h"

Thread_loop::Thread_loop(QObject *parent) : QThread(parent)
{

}

Thread_loop::~Thread_loop()
{

}

void Thread_loop::run()
{
    while(!this->stop==true)
    {
        ;
    }
}
