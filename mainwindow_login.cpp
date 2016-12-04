#include "mainwindow_login.h"
#include "ui_mainwindow_login.h"
#include "client.h"
#include "mainwindow_mainhall.h"
#include "ui_mainwindow_mainhall.h"

#include <iostream>
#include <fstream>
#include <QMessageBox>

using namespace std;
int i=0;
int j=4;

MainWindow_login::MainWindow_login(QWidget *parent) :    QMainWindow(parent),    ui(new Ui::MainWindow_login)
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
    if(nameTyped=="123"&&passTyped=="123")
    {
        if(j>0)
        {
            j--;
            switch (i) {
            case 0:
                QMessageBox::information(this,"Login aprovado","Bem-vindo, cliente_01 :D");
                mainHall01.show();
                i++;
                break;
            case 1:
                QMessageBox::information(this,"Login aprovado","Bem-vindo, cliente_02 :D");
                mainHall02.show();
                i++;
                break;
            case 2:
                QMessageBox::information(this,"Login aprovado","Bem-vindo, cliente_03 :D");
                mainHall03.show();
                i++;
                break;
            case 3:
                QMessageBox::information(this,"Login aprovado","Bem-vindo, cliente_04 :D");
                mainHall04.show();
                i++;
                break;
            }

        }
        else
        {
            QMessageBox::warning(this,"Desculpe-nos D:", "Nossa política de qualidade estipula limite de máximo para melhor atendê-lo. Tente novamente em instantes. Enquanto isso, tire uma folga no nosso bar.");
        }
    }
    else
    {
        QMessageBox::warning(this,"Algo estranho","verifique seu usúario ou senha e tente novamente");
    }

}
