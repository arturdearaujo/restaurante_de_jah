#ifndef MAINWINDOW_LOGIN_H
#define MAINWINDOW_LOGIN_H
#include <QMainWindow>
#include <QMessageBox>
#include <string>
#include <vector>
#include "restaurant.h"
#include "table.h"
#include "client.h"
#include "product.h"
#include "billitem.h"
#include "bill.h"
#include "sharedbill.h"

#include "mainwindow_mainhall.h"

using namespace std;
namespace Ui {class MainWindow_login;}

class MainWindow_login : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_login(QWidget *parent = 0);
    ~MainWindow_login();
    QString q_username;
    QString q_password;
    string username;
    string password;
    bool spot_01;
    bool spot_02;
    bool spot_03;
    bool spot_04;
    MainWindow_MainHall *mainHall01;
    MainWindow_MainHall *mainHall02;
    MainWindow_MainHall *mainHall03;
    MainWindow_MainHall *mainHall04;
    string getUsername();
    string getPassword();
    bool getSpot1();

public slots:

public slots:
    void on_pushButton_login_clicked();

private:
    Ui::MainWindow_login *ui;
};

#endif // MAINWINDOW_LOGIN_H
