#include "applysalarydeductioncontrol.h"
#include <QSqlQuery>

ApplySalaryDeductionControl::ApplySalaryDeductionControl()
{

}

ApplySalaryDeductionControl::~ApplySalaryDeductionControl()
{

}

int ApplySalaryDeductionControl::setDeductionPercentage(int employeeID, float deduction)
{
    QSqlQuery query;
    QString queryString = "UPDATE employmentdetails "
                          "SET deductionpercentage = (:deduction) "
                          "WHERE employeeid = (:employeeID)";
    query.prepare(queryString);
    query.bindValue(":deduction",  QString::number(deduction));
    query.bindValue(":employeeID", QString::number(employeeID));
    query.exec();

    notifySuccess();

    return 0;
}

int ApplySalaryDeductionControl::notifySuccess()
{
    //Need to create a success notification object here
    return true;
}


