#ifndef MAINWINDOW_LOGIN_H
#define MAINWINDOW_LOGIN_H
#include <QMainWindow>
#include<vector>
#include"mainwindow_mainhall.h"
#include "restaurant.h"

namespace Ui {
class MainWindow_login;
}

class MainWindow_login : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_login(QWidget *parent = 0);
    ~MainWindow_login();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::MainWindow_login *ui;
    vector<Ui::MainWindow_MainHall> visionClient[16];//não consegui implementar essa instrução :/
    MainWindow_MainHall mainHall01;//resolvi deixar na brutalidade :D D:
    MainWindow_MainHall mainHall02;
    MainWindow_MainHall mainHall03;
    MainWindow_MainHall mainHall04;
    MainWindow_MainHall mainHall05;
    MainWindow_MainHall mainHall06;
    MainWindow_MainHall mainHall07;
    MainWindow_MainHall mainHall08;
    MainWindow_MainHall mainHall09;
    MainWindow_MainHall mainHall10;
    MainWindow_MainHall mainHall11;
    MainWindow_MainHall mainHall12;
    MainWindow_MainHall mainHall13;
    MainWindow_MainHall mainHall14;
    MainWindow_MainHall mainHall15;
    MainWindow_MainHall mainHall16;
};

#endif // MAINWINDOW_LOGIN_H
