#include "editemployeeinfocontrol.h"
#include "employee.h"
#include "constants.h"
#include <QMap>
#include <QString>
#include <QSqlQuery>
#include <QSqlRecord>

#include <iostream>

EditEmployeeInfoControl::EditEmployeeInfoControl()
{
    this->employee = NULL;
}

int EditEmployeeInfoControl::getEmployee(int employeeID)
{
    QSqlQuery query;
    QString queryString = "SELECT * "
                          "FROM employee "
                          "WHERE employeeid = (:employeeID)";
    query.prepare(queryString);
    query.bindValue(":employeeID", QString::number(employeeID));

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

    PhoneNumber* phoneNumber = new PhoneNumber(query.value(indexCountryCode).toInt(),
                                               query.value(indexAreaCode).toInt(),
                                               query.value(indexLocalNumber).toInt(),
                                               query.value(indexExtension).toInt());

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

    //TODO: call boundry
}

int EditEmployeeInfoControl::updateEmployeeInfo()
{
    QMap<QString, QString> list;

    employee->toAttributeList(&list);
    cout << (list.value(QString("Firstname"))).toStdString();

    string query = "UPDATE employee"
                   "SET " ;

    //db->update();
    return 0;
}

int EditEmployeeInfoControl::notifySuccess()
{
    return 0;
}

