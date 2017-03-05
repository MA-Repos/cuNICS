#include "payrolldialog.h"
#include "ui_payrolldialog.h"
#include "listemployeescontrol.h"
#include "payrollgentool.h"
#include "employeeinfo.h"
#include <qlist.h>

#include <string>
#include <QMessageBox>

payrollDialog::payrollDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payrollDialog)
{
    ui->setupUi(this);
}

payrollDialog::~payrollDialog()
{
    delete ui;
}



void payrollDialog::on_PRGT_button_2_clicked()
{
    PayrollGenTool* payDialog = new PayrollGenTool();
    payDialog->setModal(true);
    payDialog->exec();
}

void payrollDialog::on_EditEmpInfo_button_clicked()
{
//    employeeInfo* info = new employeeInfo();
//    info->setModal(true);
//    info->exec();
}

void payrollDialog::on_LAE_button_clicked()
{
    ListEmployeesControl* listemp = new ListEmployeesControl(this);
     listemp->displayEmployeeList();
     qDebug() << "qstr" << endl;
}
