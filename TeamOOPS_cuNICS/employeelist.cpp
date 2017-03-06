#include "employeelist.h"
#include "ui_employeelist.h"
#include "employee.h"
#include "user.h"
#include <QString>
#include <iostream>


EmployeeList::EmployeeList(QWidget *parent, QList<Employee*>* emplst) :
    QDialog(parent),
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

void EmployeeList::callDisplay(){
    this->display_List();
}



void EmployeeList::display_List(){



    // If the List is Null, return
        if (!this->employees)
            return;

     // itterate throught and append data to the table dynamically
    QList<Employee*>::iterator i;
    for (i = this->employees->begin(); i != this->employees->end(); ++i){

        QString name = (*i)->getFullName();
        int eID  = (*i)->getEmployeeNumber();
        const int currentRow2 =  ui->tableList->rowCount();
        ui->tableList->setRowCount(currentRow2 + 1);
        ui->tableList->setItem(currentRow2, 0, new QTableWidgetItem(QString::number(eID)));
        ui->tableList->setItem(currentRow2, 1, new QTableWidgetItem(name));

    }

}


void EmployeeList::on_tableList_cellDoubleClicked(int row, int column)
{
    QString tempInt = ui->tableList->item(row, 0)->text();
    int eIDtemp = tempInt.toInt();

    EditEmployeeInfoControl* eControl = new EditEmployeeInfoControl();
    eControl->getEmployeeInfo(eIDtemp);

}


