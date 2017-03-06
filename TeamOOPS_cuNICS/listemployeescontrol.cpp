#include "listemployeescontrol.h"
#include "constants.h"
#include "employee.h"
#include "phonenumber.h"
#include "address.h"
#include "bankinformation.h"

//TODO: remove
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QString>
#include <iostream>
#include <QSqlError>
#include <typeinfo>
#include <QVariant>
using namespace std;

ListEmployeesControl::ListEmployeesControl(MainWindow* window)
{
    this->window = window;
    this->employees = NULL;
}

int ListEmployeesControl::setFilter(User* filter)
{
    this->filter = filter;
    return 0;
}

int ListEmployeesControl::getAllEmployees()
{
    employees = new QList<User*>();
    QSqlQuery query("SELECT * FROM employee");

    qDebug() << query.lastError();

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
    int i = 0;

    qDebug() << "first: " << indexFName;
    while (query.next()){

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

        BankInformation* bank = new BankInformation(777,
                                                    query.value(indexBankNumber).toInt(),
                                                    query.value(indexBranchNumber).toInt(),
                                                    query.value(indexBankName).toString(),
                                                    query.value(indexFName).toString(),
                                                    query.value(indexLName).toString());

        QString fName = "li";

        Employee* employee = new Employee(fName,
                                          query.value(indexLName).toString(),
                                          query.value(indexEmployeeID).toInt(),
                                          phoneNumber,
                                          address,
                                          bank,
                                          query.value(indexSinNumber).toInt());
        employees->append(employee);

        qDebug() << query.value(indexAccountNumber).toInt();
        //qDebug() << typeid(query.value(indexAccountNumber).toInt()).name();
        qDebug() << typeid(query.value(indexFName).toString()).name();
        //qDebug() << employees->at(i)->getFName();
        qDebug() << employees->at(i)->toQString() << endl;
        window->display(employees->at(i)->getFName());
        i++;

    }
    return 0;
}

int ::ListEmployeesControl::displayEmployeeList()
{
    this->getAllEmployees();


    return 0;
}

