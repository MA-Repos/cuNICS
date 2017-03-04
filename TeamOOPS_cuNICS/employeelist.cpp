#include "employeelist.h"
#include "ui_employeelist.h"

EmployeeList::EmployeeList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EmployeeList)
{
    ui->setupUi(this);
}

EmployeeList::~EmployeeList()
{
    delete ui;
}

void EmployeeList::on_Employee_List_cellDoubleClicked(int row, int column)
{

    QString str;
    QTableWidgetItem* itm = ui->Employee_List->item( row, column );
    if (itm)
    str = itm->text();

    // pass this to the controller
    //controller opens the window of new employee.
}
