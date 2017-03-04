#include "employeeinfo.h"
#include "ui_employeeinfo.h"

employeeInfo::employeeInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employeeInfo)
{
    ui->setupUi(this);
}

employeeInfo::~employeeInfo()
{
    delete ui;
}
