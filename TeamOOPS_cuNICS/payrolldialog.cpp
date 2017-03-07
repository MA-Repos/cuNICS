#include "payrolldialog.h"
#include "ui_payrolldialog.h"
#include "listemployeescontrol.h"
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



void payrollDialog::on_LAE_button_clicked()
{
    ListEmployeesControl* listemp = new ListEmployeesControl(this);
     listemp->displayEmployeeList();

}

void payrollDialog::on_logoutButton_clicked()
{
    close();
}
