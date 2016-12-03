#include "mainwindow_login.h"
#include <QApplication>
#include"restaurant.h"
#include"table.h"
#include"client.h"

Client currentClient;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow_login w;
    w.show();

    return a.exec();
}
