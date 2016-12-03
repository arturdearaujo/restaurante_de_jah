#include "mainwindow_login.h"
#include "ui_mainwindow_login.h"
#include"client.h"
#include <iostream>
#include <fstream>
using namespace std;

MainWindow_login::MainWindow_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_login)
{
    ui->setupUi(this);
}

MainWindow_login::~MainWindow_login()
{
    delete ui;
}

void MainWindow_login::on_pushButton_login_clicked()
{
    QString nameTyped = ui->lineEdit_username->text();
    QString passTyped = ui->lineEdit_password->text();

}
