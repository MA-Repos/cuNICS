#include "payrollgentool.h"
#include "ui_payrollgentool.h"

PayrollGenTool::PayrollGenTool(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PayrollGenTool)
{
    ui->setupUi(this);
}

PayrollGenTool::~PayrollGenTool()
{
    delete ui;
}
