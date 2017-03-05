#include "employeelist.h"
#include "ui_employeelist.h"
#include "employee.h"
#include "user.h"
#include <QString>
#include <employeeinfo.h>
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
 qDebug() << "called" << endl;

 for (int i =0; i < 10; i++){
         //QString name = QString::fromStdString((*i)->getFullName());
         //QString eID = QString::number((*i)->getEmployeeNumber());

         const int currentRow =  ui->tableList->rowCount();
          ui->tableList->setRowCount(currentRow + 1);

         ui->tableList->setItem(currentRow, 0, new QTableWidgetItem("number"));
         ui->tableList->setItem(currentRow, 1, new QTableWidgetItem("name"));

 }
    // If the List is Null, return
        if (!this->employees)
            return;

     // itterate throught and append data to the table dynamically
    QList<Employee*>::iterator i;
    for (i = this->employees->begin(); i != this->employees->end(); ++i){

        QString name = (*i)->getFullName();
        int eID  = (*i)->getEmployeeNumber();
        qDebug() << "FullName: " +name+ " EmployeeNumber: " +eID << endl;
        const int currentRow2 =  ui->tableList->rowCount();
         qDebug() << "currentRow: " +QString::number(currentRow2)<< endl;
        ui->tableList->setRowCount(currentRow2 + 1);
        ui->tableList->setItem(currentRow2, 0, new QTableWidgetItem("eID"));
        ui->tableList->setItem(currentRow2, 1, new QTableWidgetItem("name2"));

    }

}


void EmployeeList::on_tableList_cellDoubleClicked(int row, int column)
{

    /*
    QString employeeIDtemp = ui->Employee_List->item(row, 0)->text();
    Employee* tempUser = NULL;


    QList<Employee*>::iterator i;
    for ((*i) = this->employees->begin(); (*i) != this->employees->end(); ++i){


           QString eID = QString::number((*i)->getEmployeeNumber());

           if( employeeIDtemp == "1234" ){

           }


       }

       */

}


