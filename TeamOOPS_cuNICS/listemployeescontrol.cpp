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

using namespace std;

ListEmployeesControl::ListEmployeesControl()
{
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

    int indexEmployeeID = query.record().indexOf("employeeid");
    int indexFName = query.record().indexOf("firstname");
    int indexLName = query.record().indexOf("lastname");
    int indexCountryCode = query.record().indexOf("phonenumber");
    int indexStreet = query.record().indexOf("street");
    int indexStreetNumber = query.record().indexOf("streetnumber");
    int indexCity = query.record().indexOf("city");
    int indexProvince = query.record().indexOf("province");
    int indexCountry = query.record().indexOf("country");
    int indexPostalCode = query.record().indexOf("postalcode");
    int indexAccountNumber = query.record().indexOf("accountnumber");
    int indexBankNumber = query.record().indexOf("banknumber");
    int indexBranchNumber = query.record().indexOf("branchnumber");
    int indexBankName = query.record().indexOf("bankname");
    int indexSinNumber = query.record().indexOf("sinnumber");
    int i = 0;
    while (query.next()){
        employees->append(
                    new Employee(
                                 query.value(indexFName).toString().toStdString(),
                                 query.value(indexLName).toString().toStdString(),
                                 query.value(indexEmployeeID).toInt(),
                                 new PhoneNumber(),
                                 new Address(query.value(indexStreet).toString().toStdString(),
                                             query.value(indexStreetNumber).toInt(),
                                             query.value(indexCity).toString().toStdString(),
                                             query.value(indexProvince).toString().toStdString(),
                                             query.value(indexCountry).toString().toStdString(),
                                             query.value(indexPostalCode).toString().toStdString()),
                                 new BankInformation(query.value(indexAccountNumber).toInt(),
                                                     query.value(indexBankNumber).toInt(),
                                                     query.value(indexBranchNumber).toInt(),
                                                     query.value(indexBankName).toString().toStdString(),
                                                     query.value(indexFName).toString().toStdString(),
                                                     query.value(indexLName).toString().toStdString()),
                                 query.value(indexSinNumber).toInt()
                                 )
                        );
        QString qstr = QString::fromStdString(employees->at(i)->toString());
        qDebug() << qstr << endl;
        i++;
    }
    return 0;
}

int ::ListEmployeesControl::displayEmployeeList()
{
    this->getAllEmployees();
    return 0;
}

