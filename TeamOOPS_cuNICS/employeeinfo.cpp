#include "employeeinfo.h"
#include "ui_employeeinfo.h"
#include "employee.h"
#include "address.h"
#include "phonenumber.h"
#include "bankinformation.h"
#include "salary.h"
#include "status.h"
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
 qDebug() << "called" << endl;





    // GET USER INFO
    QString Fname = this->employee->getFName();
    QString Lname = this->employee->getLName();

    Address* address = this->employee->getAddress();
         QString street     = address->getStreet();
         int streetNum  = address->getStreetNumber();
         QString city       = address->getCity();
         QString province   = address->getProvince();
         QString country    = address->getCountry();
         QString postalCode = address->getPostalCode();

    PhoneNumber* phoneNum = this->employee->getPhoneNumber();
        QString localNum    = phoneNum->getLocalNumber();
        QString countryCode = phoneNum->getCountryCode();
        QString extension   = phoneNum->getExtension();
        QString localCode   = phoneNum->getLocalCode();

   BankInformation* bankInfo = this->employee->getBankInformation();
        int     accountNum = bankInfo->getAccountNumber();
        int     bankNum    = bankInfo->getBankNumber();
        int     branchNum  = bankInfo->getBranchNumber();
        QString bankName   = bankInfo->getBankName();

    int eID = this->employee->getEmployeeNumber();
    int sin = this->employee->getSIN();

    int roles = this->employee->getNumRoles();
     qDebug() << roles;
    for(int i =0; i< roles; i++){
        Role* tempRole = this->employee->getRoleAtIndex(i);
        Status* status = tempRole->getStatus();
        QString roleType = tempRole->getRole();
        QString employmentType =  status->getEmploymentType();
        QString employmenStatus= status->getEmploymentStatus();
        qDebug() << roleType;
        qDebug() << employmentType;
        qDebug() << employmenStatus;
        const int currentRow2 =  ui->rolesTable->rowCount();
        ui->rolesTable->setRowCount(currentRow2 + 1);
        ui->rolesTable->setItem(currentRow2, 0, new QTableWidgetItem(roleType));
        ui->rolesTable->setItem(currentRow2, 1, new QTableWidgetItem(employmentType));
        ui->rolesTable->setItem(currentRow2, 2, new QTableWidgetItem(employmenStatus));


    }


    //Salary* salaryInfo = this->employee->get
    //float salaryDeduct;

    // SET LABEL INFO
//SetEmployeeID
    ui->label_eID->setText(QString::number(eID));

// SetFirstName LastName
    ui->label_Fname->setText(Fname);
    ui->label_Lname->setText(Lname);

//SetPhoneNumber
    ui->label_localNum->setText(localNum);
    ui->label_countryCode->setText(countryCode);
    ui->label_extension->setText(extension);
    ui->label_localCode->setText(localCode);

// SetAddress
    ui->label_street->setText(street);
    ui->label_streetNum->setText(QString::number(streetNum));
    ui->label_city->setText(city);
    ui->label_province->setText(province);
    ui->label_country->setText(country);
    ui->label_postalCode->setText(postalCode);

//Set BankInformation
    ui->label_accountNum->setText(QString::number(accountNum));
    ui->label_bankNum->setText(QString::number(bankNum));
    ui->label_branchNum->setText(QString::number(branchNum));
    ui->label_bankName->setText(bankName);

//Set DeductionPercenatge
ui->label_deductionPerc->setText(QString::number(accountNum));

//Set SIN
    ui->label_sin->setText(QString::number(sin));

//Set Roles
     //Role* role = this->employee->getRole();


}


