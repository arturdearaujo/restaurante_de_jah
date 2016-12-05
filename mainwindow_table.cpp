#include "mainwindow_table.h"
#include "ui_mainwindow_table.h"

MainWindow_table::MainWindow_table(QWidget *parent) :    QMainWindow(parent),    ui(new Ui::MainWindow_table)
{
    ui->setupUi(this);
}

MainWindow_table::~MainWindow_table()
{
    delete ui;
}
