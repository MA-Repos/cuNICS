#include "manageemployeesalarycontrol.h"
#include <QSqlQuery>
//#include "constants.h"

ManageEmployeeSalaryControl::ManageEmployeeSalaryControl(Role* role)
{
    this->role = role;
}

int ManageEmployeeSalaryControl::applyRaiseAmount(float amount)
{
    this->getCurrentSalary();
    this->salary += amount;
    this->updateSalary();
    notifySuccess();

    return 0;
}

int ManageEmployeeSalaryControl::applyRaisePercentage(float percentage)
{
    this->getCurrentSalary();
    this->salary *= (1 + percentage);
    this->updateSalary();
    this->notifySuccess();

    return 0;
}

int ManageEmployeeSalaryControl::getCurrentSalary()
{
    QSqlQuery query;
    QString queryString = "SELECT salary"
                          "FROM   employmentdetails "
                          "WHERE  roletype = (:roleType) "
                          "AND    employmentstatus = (:employmentStatus) "
                          "AND    employmentType = (:employmentType)";

    query.prepare(queryString);
    query.bindValue(":roleType",       role->getRole());
    query.bindValue(":employeeStatus", role->getStatus()->getEmploymentStatus());
    query.bindValue(":employeeType",   role->getStatus()->getEmploymentType());
    query.exec();

    salary = query.value(0).toFloat();

    return 0;
}

int ManageEmployeeSalaryControl::updateSalary()
{
    QSqlQuery query;
    QString queryString = "UPDATE employmentdetails "
                          "SET    salary = (:amount) "
                          "WHERE  roletype = (:roleType) "
                          "AND    employmentstatus = (:employmentStatus) "
                          "AND    employmentType = (:employmentType)";

    query.prepare(queryString);
    query.bindValue(":amount",         QString::number(this->salary));
    query.bindValue(":roleType",       role->getRole());
    query.bindValue(":employeeStatus", role->getStatus()->getEmploymentStatus());
    query.bindValue(":employeeType",   role->getStatus()->getEmploymentType());
    query.exec();

    return 0;
}

int ManageEmployeeSalaryControl::notifySuccess()
{
    return 0;
}
