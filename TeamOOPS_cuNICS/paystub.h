#ifndef PAYSTUB_H
#define PAYSTUB_H

#include "date.h"
#include "employee.h"
#include <string>
#include <QMap>

class Employee;

class Paystub
{
private:
    Date*       date;
    float       grossIncome;
    float       netIncome;
    float       deductions;
    float       yearToDateGrossIncome;
    float       yearToDateNetIncome;
    float       yearToDateDeductions;
    Employee*   employee;

public:
    Paystub(Date*       date,
            float       grossIncome,
            float       deductions,
            float       yearToDateGrossIncome,
            float       yearToDateDeductions,
            Employee*   employee);
    ~Paystub();

    //----- Getters -----
    Date*   getDate();
    float   getGrossIncome();
    float   getNetIncome();
    float   getDeductions();
    float   getYTDGrossIncome();
    float   getYTDNetIncome();
    float   getYTDDeductions();
    string  getEmployeeName();
    int     getEmployeeID();

    bool    toAttributeList(QMap<string, string>* list);
};

#endif // PAYSTUB_H
