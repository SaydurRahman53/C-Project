#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Signbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(4); //register_page
}


void MainWindow::on_loginbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(16); //login_page
}


void MainWindow::on_RG_clicked()
{
    ui->stackedWidget->setCurrentIndex(5); //login_page
}


void MainWindow::on_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); //front_page
}


void MainWindow::on_log_clicked()
{
    username = ui->usern->text();
    password = ui->pass->text();
    // qDebug()<<usern<<Password;
    if(username == "SaydurRahman" && password=="12345")
    {
        ui->stackedWidget->setCurrentIndex(6); //main_page
    }
}


void MainWindow::on_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); //front_page
}


void MainWindow::on_admitbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);
}


void MainWindow::on_Back_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(6); //back_mainPage
}


void MainWindow::on_DCEbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_Submit_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_loginnow_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
}


void MainWindow::on_Dlbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_Doctor_A_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_EGYbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);
}


void MainWindow::on_Servicebtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);
}


void MainWindow::on_Doctor_B_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}


void MainWindow::on_Doctor_C_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}


void MainWindow::on_Doctor_D_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}


void MainWindow::on_Doctor_E_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}


void MainWindow::on_doc_E_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_doc_D_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_doc_C_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_doc_B_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_doc_a_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_Back_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(6); //main_page
}


void MainWindow::on_Back_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(6); //main_page
}


void MainWindow::on_Back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(6); //main_page
}


void MainWindow::on_Back_am_clicked()
{
    ui->stackedWidget->setCurrentIndex(6); //main_page
}


void MainWindow::on_regadmitbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

