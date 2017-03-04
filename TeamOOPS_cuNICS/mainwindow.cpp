#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employeedialog.h"
#include "payrolldialog.h"
#include "user.h"

#include <QMessageBox>

#include <QSqlDatabase>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_logi_button_clicked()
{

    QString username,password;
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();

    /*
    if(!mydb.open()){
        qDebug()<<"Failed to open DB";
        return;
    }

    QSqlQuery query;
    if(query.exec("select * from db where username='"+username+"' and password='"+password+"'"))
    */
    User* employee = NULL;
    if(username=="employee" && password == "1234"){
        hide();
         //ui->label_message->setText("You a hoe!!");
         EmployeeDialog empDialog;
         empDialog.setModal(true);
         empDialog.exec();
    }else if(username=="payroll" && password == "1234"){

        hide();
         payrollDialog* payDialog = new payrollDialog(0,employee);
         payDialog->setModal(true);
         payDialog->exec();
    }
     else{
        QMessageBox::warning(this,"Login","Username or password is incorrect");
    }

    //ui->label->adjustSize();
}

void MainWindow::on_textBrowser_textChanged()
{


}
