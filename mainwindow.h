#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Signbtn_clicked();

    void on_loginbtn_clicked();

    void on_RG_clicked();

    void on_Back_clicked();

    void on_log_clicked();

    void on_back_clicked();

    void on_admitbtn_clicked();

    void on_Back_2_clicked();

    void on_DCEbtn_clicked();

    void on_Submit_clicked();

    void on_loginnow_clicked();

    void on_Dlbtn_clicked();

    void on_Doctor_A_clicked();

    void on_EGYbtn_clicked();

    void on_Servicebtn_clicked();

    void on_Doctor_B_clicked();

    void on_Doctor_C_clicked();

    void on_Doctor_D_clicked();

    void on_Doctor_E_clicked();

    void on_doc_E_back_clicked();

    void on_doc_D_back_clicked();

    void on_doc_C_back_clicked();

    void on_doc_B_back_clicked();

    void on_doc_a_back_clicked();

    void on_Back_3_clicked();

    void on_Back_5_clicked();

    void on_Back_4_clicked();

    void on_Back_am_clicked();

    void on_regadmitbtn_clicked();

private:
    Ui::MainWindow *ui;
    QString username,password;
};
#endif // MAINWINDOW_H
