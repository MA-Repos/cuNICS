#include "payrollgenerationtool.h"
#include <QSqlQuery>
#include<QSqlRecord>
#include <QSqlError>
#include <QDebug>

PayrollGenerationTool::PayrollGenerationTool()
{
    this->paystubs = NULL;
    this->employees = NULL;
}

int PayrollGenerationTool::getAllEmployees()
{
    this->employees = new QList<User*>;
    QSqlQuery query("SELECT * FROM employee");
    qDebug() << query.lastError();

    int indexEmployeeID =    query.record().indexOf("employeeid");
    int indexFName =         query.record().indexOf("firstname");
    int indexLName =         query.record().indexOf("lastname");

    while (query.next()){
        Employee* employee = new Employee(query.value(indexFName).toString(),
                                          query.value(indexLName).toString(),
                                          query.value(indexEmployeeID).toInt(),
                                          NULL,
                                          NULL,
                                          NULL,
                                          0);
        employees->append(employee);
    }

    return 0;
}

int PayrollGenerationTool::generatePaystubs(Date* payDate)
{
    this->getAllEmployees();


    return 0;
}

int PayrollGenerationTool::viewSummary()
{
    return 0;
}

int PayrollGenerationTool::notifySuccess()
{
    return 0;
}

