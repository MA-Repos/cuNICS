#include "payrolldialog.h"
#include "ui_payrolldialog.h"
#include "listemployeescontrol.h"

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

void payrollDialog::on_listemployees_button_clicked()
{
 ListEmployeesControl listemp;
    listemp
}
