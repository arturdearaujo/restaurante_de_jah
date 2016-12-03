#include "mainwindow_mainhall.h"
#include "ui_mainwindow_mainhall.h"

MainWindow_MainHall::MainWindow_MainHall(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_MainHall)
{
    ui->setupUi(this);
}

MainWindow_MainHall::~MainWindow_MainHall()
{
    delete ui;
}

void MainWindow_MainHall::on_pushButton_mesa01_clicked()
{

}
