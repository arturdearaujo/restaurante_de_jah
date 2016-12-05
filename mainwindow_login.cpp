#include "mainwindow_login.h"
#include "ui_mainwindow_login.h"
#include "mainwindow_mainhall.h"

#include <QDebug>

MainWindow_login::MainWindow_login(QWidget *parent) :    QMainWindow(parent),    ui(new Ui::MainWindow_login)
{
    ui->setupUi(this);
    QString q_username = "";
    QString q_password = "";
    string username = "";
    string password = "";
    spot_01=true;
    spot_02=true;
    spot_03=true;
    spot_04=true;
    mainHall01 = new MainWindow_MainHall(this);
    mainHall02 = new MainWindow_MainHall(this);
    mainHall03 = new MainWindow_MainHall(this);
    mainHall04 = new MainWindow_MainHall(this);
}

MainWindow_login::~MainWindow_login()
{
    delete ui;
}

string MainWindow_login::getUsername()
{
    QString q_username = ui->lineEdit_username->text();
    username = q_username.toStdString();
    return username;
}

string MainWindow_login::getPassword()
{
    QString q_password = ui->lineEdit_password->text();
    password = q_password.toStdString();
    return password;
}

bool MainWindow_login::getSpot1()
{
    return spot_01;
}

void MainWindow_login::on_pushButton_login_clicked()
{
    if(mainHall01->released ==true)
    {
        spot_01=true;
    }
    if(mainHall02->released==true)
    {
        spot_02=true;
    }
    if(mainHall03->released==true)
    {
        spot_03=true;
    }
    if(mainHall04->released==true)
    {
        spot_04=true;
    }


    q_username = ui->lineEdit_username->text();
    q_password = ui->lineEdit_password->text();
    MainWindow_login::getUsername();
    MainWindow_login::getPassword();

    if(q_username=="123"&&q_password=="123")
    {
        if(spot_01==true){
            QMessageBox::information(this,"LOGIN","Bem-vindo!\n Cliente na vaga 01");
            spot_01 = false;
            mainHall01->setWindowTitle("janela 1");
            mainHall01->show();
            mainHall01->released = false;
        }else if(spot_02==true){
            QMessageBox::information(this,"LOGIN","Bem-vindo!\n Cliente na vaga 02");
            spot_02 = false;
            mainHall02->setWindowTitle("janela 2");
            mainHall02->show();
            mainHall02->released = false;
        }else if(spot_03==true){
            QMessageBox::information(this,"LOGIN","Bem-vindo!\n Cliente na vaga 03");
            spot_03 = false;
            mainHall03->setWindowTitle("janela 3");
            mainHall03->show();
            mainHall03->released = false;
        }else if(spot_04==true){
            QMessageBox::information(this,"LOGIN","Bem-vindo!\n Cliente na vaga 04");
            spot_04 = false;
            mainHall04->setWindowTitle("janela 4");
            mainHall04->show();
            mainHall04->released = false;
        }else{
            QMessageBox::information(this,"Desculpe-nos","Estamos lotados");
        }
    }else
    {
        QMessageBox::information(this,"Algo estranhop","Verifique seu usuário ou senha");
    }
    qDebug()<<spot_01;
    qDebug()<<spot_02;
    qDebug()<<spot_03;
    qDebug()<<spot_04;
    qDebug()<<"\n";
}
