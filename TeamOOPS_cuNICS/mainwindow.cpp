#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/admin/Desktop/3004/TeamOOPS-cuNICS/TeamOOPS_cuNICS/db/employeeData.db");
    db.open();

    QSqlQuery query;
    query.prepare("SELECT * FROM date");
    query.exec();

    while (query.next()){
        ui->label->setText(query.value(0).toString());
    }
    ui->label->adjustSize();
}
