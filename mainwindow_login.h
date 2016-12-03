#ifndef MAINWINDOW_LOGIN_H
#define MAINWINDOW_LOGIN_H

#include <QMainWindow>

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
};

#endif // MAINWINDOW_LOGIN_H
