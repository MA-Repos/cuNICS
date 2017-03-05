#include "employeelist.h"
#include "ui_employeelist.h"
#include "employee.h"
#include "user.h"
#include <QString>

EmployeeList::EmployeeList(QWidget *parent, QList<Employee*>* emplst) :
    QWidget(parent),
    ui(new Ui::EmployeeList)
{
    ui->setupUi(this);
    this->employees = emplst;
    this->display_List();

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

    for (int i =0; i < 10; i++){
        //QString name = QString::fromStdString((*i)->getFullName());
        //QString eID = QString::number((*i)->getEmployeeNumber());

        const int currentRow =  ui->Employee_List->rowCount();
         ui->Employee_List->setRowCount(currentRow + 1);

        ui->Employee_List->setItem(currentRow, 0, new QTableWidgetItem("number"));
        ui->Employee_List->setItem(currentRow, 1, new QTableWidgetItem("name"));

    }

        if (!this->employees)
            return;
    QList<Employee*>::iterator i;
    for (i = this->employees->begin(); i != this->employees->end(); ++i){
        QString name = QString::fromStdString((*i)->getFullName());
        QString eID = QString::number((*i)->getEmployeeNumber());

        const int currentRow =  ui->Employee_List->rowCount();
         ui->Employee_List->setRowCount(currentRow + 1);

        ui->Employee_List->setItem(currentRow, 0, new QTableWidgetItem(eID));
        ui->Employee_List->setItem(currentRow, 1, new QTableWidgetItem(name));

    }

}
