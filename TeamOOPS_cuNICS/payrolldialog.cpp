#include "payrolldialog.h"
#include "ui_payrolldialog.h"

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
