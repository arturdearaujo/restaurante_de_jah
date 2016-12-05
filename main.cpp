#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "mainwindow_login.h"
#include "mainwindow_mainhall.h"
#include "mainwindow_table.h"

#include <QApplication>
#include <QMessageBox>
#include <QtGui>
#include <QtCore>
#include <vector>
#include <QDebug>

#include "restaurant.h"
#include "table.h"
#include "client.h"
#include "product.h"
#include "billitem.h"
#include "bill.h"
#include "sharedbill.h"

#include "mythread_01.h"

using namespace std;

Restaurant jahjah;

Table table_01;
Table table_02;
Table table_03;
Table table_04;

Client client_01;
Client client_02;
Client client_03;
Client client_04;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow_login w_login;

    MainWindow_table w_table_01;
    MainWindow_table w_table_02;
    MainWindow_table w_table_03;
    MainWindow_table w_table_04;
    w_login.show();

    MyThread_01 mthread_01;
    mthread_01.start();


    return a.exec();
}
