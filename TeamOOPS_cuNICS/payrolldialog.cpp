#include "payrolldialog.h"
#include "ui_payrolldialog.h"
#include "listemployeescontrol.h"
#include "payrollgentool.h"
#include <qlist.h>

#include <string>
#include <QMessageBox>

payrollDialog::payrollDialog(QWidget *parent,User* employee) :
    QDialog(parent),
    ui(new Ui::payrollDialog)
{
    this->ps = employee;

    ui->setupUi(this);
  //string fullname = ps->getFullName();
    //ui->fullname->setText(fullname);
}

payrollDialog::~payrollDialog()
{
    delete ui;
    delete ps;
}

void payrollDialog::on_listemployees_button_clicked()
{
 //ListEmployeesControl* listemp;
 //QList<Employee*>* employees;
// employees =   listemp->displayEmployeeList();


}

void payrollDialog::on_lineEdit_returnPressed()
{
     QMessageBox::warning(this,"Login","Username or password is incorrect");
}

void payrollDialog::on_PRGT_button_2_clicked()
{
    PayrollGenTool* payDialog = new PayrollGenTool();
    payDialog->setModal(true);
    payDialog->exec();
}
