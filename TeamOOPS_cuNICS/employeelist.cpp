#include "employeelist.h"
#include "ui_employeelist.h"
#include "employee.h"

EmployeeList::EmployeeList(QWidget *parent,QList* employeeList) :
    QWidget(parent),
    ui(new Ui::EmployeeList)
{
    ui->setupUi(this);
    this->employees = employeeList;
}

EmployeeList::~EmployeeList()
{
    delete ui;
    delete employees;
}

void EmployeeList::on_Employee_List_cellDoubleClicked(int row, int column)
{

    QString str;
    QTableWidgetItem* itm = ui->Employee_List->item( row, column );
    if (itm)
    str = itm->text();
}


void EmployeeList::display_List(){

     int rowNum = ui->Employee_List->rowCount();

     if(rowNum == NULL)
         rowNum = 0;

    QList<Employee*>::iterator i;
    for (i = list.begin(); i != list.end(); ++i){
        QString name = i->getFullName();
        QString eID = i->getEmployeeNumber();

         QTableWidgetItem* itm = ui->Employee_List->item( row, column );


    }

}
