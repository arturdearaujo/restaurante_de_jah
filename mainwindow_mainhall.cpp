#include "mainwindow_mainhall.h"
#include "ui_mainwindow_mainhall.h"

#include <QDebug>

MainWindow_MainHall::MainWindow_MainHall(QWidget *parent) :    QMainWindow(parent),    ui(new Ui::MainWindow_MainHall)
{
    ui->setupUi(this);
    released = false;
}

MainWindow_MainHall::~MainWindow_MainHall()
{
    delete ui;
}

void MainWindow_MainHall::on_pushButton_close_clicked()
{
    released = true;
    hide();
    qDebug()<<released;
}

