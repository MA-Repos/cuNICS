#include "editemployeeinfocontrol.h"
#include "employee.h"
#include "constants.h"
#include <string.h>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QString>


EditEmployeeInfoControl::EditEmployeeInfoControl(User* employee)
{
    this->employee = employee;

}

int EditEmployeeInfoControl::updateEmployeeInfo(Employee *employee)
{
    int EmployeeID = EmployeeID = employee->getEmployeeNumber();
    string FName = employee->getFName().toStdString();
    string LName = employee->getLName().toStdString();
    string Street = employee->getAddress()->getStreet().toStdString();
    int StreetNumber = employee->getAddress()->getStreetNumber();
    //
    string phonenumber = employee->getPhoneNumber()->getPhoneNumberAsQString().toStdString();
    string City = employee->getAddress()->getCity().toStdString();
    string Province = employee->getAddress()->getProvince().toStdString();
    string Country = employee->getAddress()->getCountry().toStdString();
    string PostalCode = employee->getAddress()->getPostalCode().toStdString();
    int AccountNumber = employee->getBankInformation()->getAccountNumber();
    int BankNumber = employee->getBankInformation()->getBankNumber();
    int BranchNumber = employee->getBankInformation()->getBranchNumber();
    string BankName = employee->getBankInformation()->getBankName().toStdString();
    int SinNumber = employee->getSIN();



    // Other way to do it
    //    QString myQuery = QString("UPDATE EMPLOYEE set firstname = %1 ,lastname = %2,sinnumber = %3, phonenumber = %4, street = %5,streetnumber = %6, city = %7, province= %8, country= %9, postalccode= %10, bankname= %11, banknumber= %12, branchnumber= %13, accountnumber=%14 where employeeid = %15;").arg(FName, LName, QString::number(SinNumber), phonenumber, Street, QString::number(StreetNumber), City, Province, Country, PostalCode, BankName, QString::number(BankNumber), QString::number(BranchNumber), QString::number(AccountNumber),QString::number(EmployeeID));
    //    qDebug() << myQuery;


    string sqlstr = "UPDATE employee SET firstname = \'" + FName + "\' ,lastname = \'" + LName + "\' , sinnumber = "+(QString::number(SinNumber).toStdString())+" , phonenumber = \'"+phonenumber+"\ ,street = \'"+Street+"\', streetnumber = "+(QString::number(StreetNumber).toStdString())+" ,city =\'"+City+"\' , province= \'"+Province+"\' ,country= \'"+Country+"\' ,postalcode= \'"+PostalCode+"\' ,bankname=\'"+BankName+"\' ,banknumber= "+(QString::number(BankNumber).toStdString())+", branchnumber= "+(QString::number(BranchNumber).toStdString())+", accountnumber= "+(QString::number(AccountNumber).toStdString())+" WHERE employeeid = "+(QString::number(EmployeeID).toStdString())+";";
    QString sql = QString::fromStdString(sqlstr);

    QSqlQuery query(sql);

    return 0;
}

int EditEmployeeInfoControl::notifySuccess()
{
    return 0;
}

