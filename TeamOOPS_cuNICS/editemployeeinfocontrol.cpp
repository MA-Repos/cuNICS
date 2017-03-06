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

int EditEmployeeInfoControl::updateEmployeeInfo()
{
    //NullCheckNegOne(db);
    string query = "UPDATE employee"
                   "SET ";

    //db->update();
    return 0;
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



