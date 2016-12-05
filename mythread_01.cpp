#include "mythread_01.h"
#include <QtCore>
#include <QtDebug>
#include <QApplication>
#include <QThread>

#include "mainwindow_login.h"
#include "mainwindow_mainhall.h"
#include "mainwindow_table.h"

MyThread_01::MyThread_01(QObject *parent) : QThread(parent)
{

}

MyThread_01::~MyThread_01()
{

}

void MyThread_01::run(QApplication *arg,
                      MainWindow_MainHall *arg_hall1,
                      MainWindow_MainHall *arg_hall2,
                      MainWindow_MainHall *arg_hall3,
                      MainWindow_MainHall *arg_hall4,
                      bool spot01,
                      bool spot02,
                      bool spot03,
                      bool spot04)
{
    qDebug() <<"running thread 1\n";
    while(true)
    {
        if(spot01==true){
            arg_hall1->setWindowTitle("Restaurante de Jah: Cliente 01");
            arg_hall1->show();
        }else if(spot02==true){
            arg_hall2->setWindowTitle("Restaurante de Jah: Cliente 02");
            arg_hall2->show();
        }else if(spot03==true){
            arg_hall3->setWindowTitle("Restaurante de Jah: Cliente 03");
            arg_hall3->show();
        }else if(spot04==true){
            arg_hall4->setWindowTitle("Restaurante de Jah: Cliente 04");
            arg_hall4->show();
        }else{
//            break;
        }
    arg->exec();
    }
}
