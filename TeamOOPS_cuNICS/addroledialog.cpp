#include "addroledialog.h"
#include "ui_addroledialog.h"
#include "editemployeeinfocontrol.h"
#include "status.h"
#include <QDate>
#include <QTableWidget>

addRoleDialog::addRoleDialog(QWidget *parent,Role* tempRole) :
    QDialog(parent),
    ui(new Ui::addRoleDialog)
{
    ui->setupUi(this);
    this->addedRole = tempRole;


}

addRoleDialog::~addRoleDialog()
{
    delete ui;
}

void addRoleDialog::getDialogData(){

QString emprole = ui->comboBox_role->currentText();
QString empstatus = ui->comboBox_status->currentText();
QString type = ui->comboBox_type->currentText();

QDate sd;
QDate ed;
ui->startDate->setDate(sd);
ui->startDate->setDate(ed);

int startYear  = sd.year();
int startMonth = sd.month();
int startDay   =   sd.month();
qDebug() <<"Date: "+QString::number(startDay)+"/"+QString::number(startMonth)+"/"+QString::number(startDay);
int endYear  = ed.year();
int endMonth = ed.month();
int endDay   =   ed.month();

Date* startD = new Date(startDay,startMonth,startYear);
Date* endD = new Date(endDay,endMonth,endYear);
float totalsalary = ui->salaryTotal->text().toFloat();
float deduct= ui->deduct->text().toFloat();
Salary* salary = new Salary(totalsalary,deduct);

bool checked = ui->checkBox->isChecked();
Status* status = new Status(checked,empstatus,type,startD,endD);
 addedRole = new Role(emprole,status,salary);



}



void addRoleDialog::on_pushButton_clicked()
{

    close();
}


