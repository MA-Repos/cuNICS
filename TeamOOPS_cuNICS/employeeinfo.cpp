#include "employeeinfo.h"
#include "ui_employeeinfo.h"
#include "employee.h"
#include "address.h"
#include "bankinformation.h"
#include "salary.h"
#include "role.h"

employeeInfo::employeeInfo(QWidget *parent,Employee* tempE):
    QDialog(parent),
    ui(new Ui::employeeInfo)
{
    ui->setupUi(this);
    this->employee = tempE;
}

employeeInfo::~employeeInfo()
{
    delete ui;
    delete employee;
}

void employeeInfo::displayEmployeeInfo()
{


    // USER INFO
    QString name = this->employee->getFullName();
    ui->label_fullname->setText("Employee Name: "+name);

    Address* address = this->employee->getAddress();
         QString street     = address->getStreet();
         int streetNum  = address->getStreetNumber();
         QString city       = address->getCity();
         QString province   = address->getProvince();
         QString country    = address->getCountry();
         QString postalCode = address->getPostalCode();

//    QString fullAddress =streetNum+ " "+
//                            street+" "+
//                            city+" "+
//                            province+" "+
//                            country+" "+
//                            postalCode+".";



    QString empNum = QString::number(this->employee->getEmployeeNumber());
     ui->label_employeeNum->setText("EmployeeID: "+empNum);

    QString sin = QString::number(this->employee->getSIN());
     ui->label_sin->setText("SIN: "+sin);


     //Role* role = this->employee->getRole();

}


