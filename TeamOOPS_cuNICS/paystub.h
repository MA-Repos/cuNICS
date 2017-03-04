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
    Date*       payDate;
    float       grossIncome;
    float       netIncome;
    float       taxDeductions;
    float       yearToDateGrossIncome;
    float       yearToDateNetIncome;
    float       yearToDateTaxDeductions;
    User*       employee;

public:
    Paystub(Date*       payDate,
            float       grossIncome,
            float       taxDeductions,
            float       yearToDateGrossIncome,
            float       yearToDatetaxDeductions,
            User*       employee);
    ~Paystub();

    //----- Getters -----
    Date*   getPayDate();
    float   getGrossIncome();
    float   getNetIncome();
    float   getTaxDeductions();
    float   getYTDGrossIncome();
    float   getYTDNetIncome();
    float   getYTDTaxDeductions();
    string  getEmployeeName();
    int     getEmployeeID();

    bool    toAttributeList(QMap<string, string>* list);
};

#endif // PAYSTUB_H
