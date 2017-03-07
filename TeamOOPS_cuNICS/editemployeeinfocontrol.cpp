#include "editemployeeinfocontrol.h"
#include "employee.h"
#include "constants.h"
#include "employeeinfo.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QString>
#include <QDebug>
#include <QSqlError>

EditEmployeeInfoControl::EditEmployeeInfoControl()
{

}



int EditEmployeeInfoControl::notifySuccess()
{
    return 0;
}

int EditEmployeeInfoControl::getEmployeeInfo(int eid){
    this->getEmployee(eid);
    return 0;
}


int EditEmployeeInfoControl::getEmployee(int employeeID)
{
    qDebug() << employeeID;


        QString queryString = QString("SELECT * FROM employee WHERE employeeid = %1").arg(QString::number(employeeID));

qDebug() << queryString;
        //query.bindValue(":employeeID", QString::number(employeeID));


        QSqlQuery query(queryString);
    query.next();

    int indexEmployeeID =    query.record().indexOf("employeeid");
    int indexFName =         query.record().indexOf("firstname");
    int indexLName =         query.record().indexOf("lastname");
    int indexCountryCode =   query.record().indexOf("countrycode");
    int indexAreaCode =      query.record().indexOf("areacode");
    int indexLocalNumber =   query.record().indexOf("localnumber");
    int indexExtension =     query.record().indexOf("extension");
    int indexStreet =        query.record().indexOf("street");
    int indexStreetNumber =  query.record().indexOf("streetnumber");
    int indexCity =          query.record().indexOf("city");
    int indexProvince =      query.record().indexOf("province");
    int indexCountry =       query.record().indexOf("country");
    int indexPostalCode =    query.record().indexOf("postalcode");
    int indexAccountNumber = query.record().indexOf("accountnumber");
    int indexBankNumber =    query.record().indexOf("banknumber");
    int indexBranchNumber =  query.record().indexOf("branchnumber");
    int indexBankName =      query.record().indexOf("bankname");
    int indexSinNumber =     query.record().indexOf("sinnumber");

    PhoneNumber* phoneNumber = new PhoneNumber(query.value(indexCountryCode).toString(),
                                               query.value(indexAreaCode).toString(),
                                               query.value(indexLocalNumber).toString(),
                                               query.value(indexExtension).toString());

    Address* address = new Address(query.value(indexStreet).toString(),
                                   query.value(indexStreetNumber).toInt(),
                                   query.value(indexCity).toString(),
                                   query.value(indexProvince).toString(),
                                   query.value(indexCountry).toString(),
                                   query.value(indexPostalCode).toString());

    BankInformation* bankInformation = new BankInformation(query.value(indexAccountNumber).toInt(),
                                                           query.value(indexBankNumber).toInt(),
                                                           query.value(indexBranchNumber).toInt(),
                                                           query.value(indexBankName).toString(),
                                                           query.value(indexFName).toString(),
                                                           query.value(indexLName).toString());

    employee = new Employee(query.value(indexFName).toString(),
                            query.value(indexLName).toString(),
                            query.value(indexEmployeeID).toInt(),
                            phoneNumber,
                            address,
                            bankInformation,
                            query.value(indexSinNumber).toInt());

//    //TODO: call boundry
   employeeInfo* eInfo = new employeeInfo(0,employee);

   eInfo->displayEmployeeInfo();
   eInfo->setModal(true);
   eInfo->exec();
}

void EditEmployeeInfoControl::updateFunctionCaller(Employee* eTemp){
    this->updateEmployeeInfo(eTemp);
}

int EditEmployeeInfoControl::updateEmployeeInfo(Employee *employee)
{
    qDebug() << "CalledUpdate";
    int EmployeeID = employee->getEmployeeNumber();
    string FName = employee->getFName().toStdString();
    string LName = employee->getLName().toStdString();
    //string FName = "Ahmed";
    //string LName = "Moe";

//    qDebug() << LName;
    string Street = employee->getAddress()->getStreet().toStdString();
    int StreetNumber = employee->getAddress()->getStreetNumber();
    //
    string countryCode = employee->getPhoneNumber()->getCountryCode().toStdString();
    string areaCode  = employee->getPhoneNumber()->getLocalCode().toStdString();
    string localNum  = employee->getPhoneNumber()->getLocalNumber().toStdString();
    string extension = employee->getPhoneNumber()->getExtension().toStdString();

    //string phonenumber = employee->getPhoneNumber()->getPhoneNumberAsQString().toStdString();
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


    string sqlstr = "UPDATE employee SET firstname = \'" + FName + "\' ,lastname = \'" + LName + "\' , sinnumber = "+(QString::number(SinNumber).toStdString())+" ,countrycode = \'"+countryCode+"\' ,areacode = \'"+areaCode+"\', localnumber = \'"+localNum+"\',extension = \'"+extension+"\',street = \'"+Street+"\', streetnumber = "+(QString::number(StreetNumber).toStdString())+" ,city =\'"+City+"\' , province= \'"+Province+"\' ,country= \'"+Country+"\' ,postalcode= \'"+PostalCode+"\' ,bankname=\'"+BankName+"\' ,banknumber= "+(QString::number(BankNumber).toStdString())+", branchnumber= "+(QString::number(BranchNumber).toStdString())+", accountnumber= "+(QString::number(AccountNumber).toStdString())+" WHERE employeeid = "+(QString::number(EmployeeID).toStdString())+";";
    QString sql = QString::fromStdString(sqlstr);

    QSqlQuery query(sql);
    this->updateEmployeeRole(employee);


    return 0;
}


int EditEmployeeInfoControl::updateEmployeeRole(Employee *employee){

    int EmployeeID = employee->getEmployeeNumber();
    int numRoles   = employee->getNumRoles();

    for (int i = 0; i < numRoles; i++){

        QString roletype =          employee->getRoleAtIndex(i)->getRole();
        Status *status =            employee->getRoleAtIndex(i)->getStatus();

        QString employmentStatus =    status->getEmploymentStatus();
        QString employmentType =      status->getEmploymentType();

        QString sql =  QString("UPDATE employmentdetails SET roletype= %1 ,employmentstatus= %2 , employmenttype= %3 where employeeid = %4").arg(roletype, employmentStatus,employmentType, QString::number(EmployeeID));

        QSqlQuery query(sql);

    }
    return 0;

}



