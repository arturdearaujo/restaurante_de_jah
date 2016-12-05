#ifndef MAINWINDOW_MAINHALL_H
#define MAINWINDOW_MAINHALL_H

#include <QMainWindow>
#include "mainwindow_table.h"

namespace Ui {class MainWindow_MainHall;}
class MainWindow_MainHall : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_MainHall(QWidget *parent = 0);
    ~MainWindow_MainHall();
    bool released;

private slots:
    void on_pushButton_close_clicked();

private:
    Ui::MainWindow_MainHall *ui;
};

#endif // MAINWINDOW_MAINHALL_H
