#include "mainwindow.h"
#include "ui_mainwindow.h"

//TODO: remove
#include <QSqlDatabase>
#include <QSqlQuery>
#include <listemployeescontrol.h>

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

void MainWindow::on_pushButton_clicked()
{
//    QSqlQuery query;
//    query.prepare("SELECT * FROM date");
//    query.exec();

//    while (query.next()){
//        ui->label->setText(query.value(0).toString());
//    }
    ListEmployeesControl* l = new ListEmployeesControl();
    l->displayEmployeeList();

    ui->label->adjustSize();
}
