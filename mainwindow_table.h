#ifndef MAINWINDOW_TABLE_H
#define MAINWINDOW_TABLE_H

#include <QMainWindow>

namespace Ui {class MainWindow_table;}
class MainWindow_table : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_table(QWidget *parent = 0);
    ~MainWindow_table();

private slots:
    void on_pushButton_logout_clicked();

private:
    Ui::MainWindow_table *ui;
};

#endif // MAINWINDOW_TABLE_H
