#include "listemployeescontrol.h"
#include "constants.h"
#include "employee.h"
#include "phonenumber.h"
#include "address.h"
#include "bankinformation.h"
#include "employeelist.h"

//TODO: remove
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QString>

using namespace std;

ListEmployeesControl::ListEmployeesControl(payrollDialog* pdtemp)
{
    this->pd = pdtemp;
    this->employees = NULL;
}

int ListEmployeesControl::setFilter(User* filter)
{
    this->filter = filter;
    return 0;
}

int ListEmployeesControl::getAllEmployees()
{
    employees = new QList<Employee*>();
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
                                 query.value(indexFName).toString(),
                                 query.value(indexLName).toString(),
                                 query.value(indexEmployeeID).toInt(),
                                 new PhoneNumber(),
                                 new Address(query.value(indexStreet).toString(),
                                             query.value(indexStreetNumber).toInt(),
                                             query.value(indexCity).toString(),
                                             query.value(indexProvince).toString(),
                                             query.value(indexCountry).toString(),
                                             query.value(indexPostalCode).toString()),
                                 new BankInformation(query.value(indexAccountNumber).toInt(),
                                                     query.value(indexBankNumber).toInt(),
                                                     query.value(indexBranchNumber).toInt(),
                                                     query.value(indexBankName).toString(),
                                                     query.value(indexFName).toString(),
                                                     query.value(indexLName).toString()),
                                 query.value(indexSinNumber).toInt()
                                 )
                        );
        QString qstr = employees->at(i)->toQString();
        i++;
    }

    EmployeeList* elist = new EmployeeList(pd,employees);
    elist->setModal(true);
    elist->exec();
    elist->callDisplay();
    return 0;
}

int ::ListEmployeesControl::displayEmployeeList()
{
    this->getAllEmployees();
    return 0;
}

