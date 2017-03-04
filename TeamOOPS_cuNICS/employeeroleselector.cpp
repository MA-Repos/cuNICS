#include "employeeroleselector.h"
#include "ui_employeeroleselector.h"

EmployeeRoleSelector::EmployeeRoleSelector(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EmployeeRoleSelector)
{
    ui->setupUi(this);
}

EmployeeRoleSelector::~EmployeeRoleSelector()
{
    delete ui;
}
