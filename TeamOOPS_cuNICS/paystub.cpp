#include "paystub.h"

Paystub::Paystub(Date*       date,
                 float       grossIncome,
                 float       taxDeductions,
                 float       yearToDateGrossIncome,
                 float       yearToDateTaxDeductions,
                 Employee*   employee)
{
    this->date                      = date;
    this->grossIncome               = grossIncome;
    this->netIncome                 = grossIncome - taxDeductions;
    this->taxDeductions             = taxDeductions;
    this->yearToDateGrossIncome     = yearToDateGrossIncome;
    this->yearToDateNetIncome       = yearToDateGrossIncome - yearToDateTaxDeductions;
    this->yearToDateTaxDeductions   = yearToDateTaxDeductions;
    this->employee                  = employee;
}

Paystub::~Paystub()
{
    if (date != NULL) {
        delete date;
    }
    employee = NULL;
}

//----- Getters -----
Date* Paystub::getDate()
{
    return date;
}

float Paystub::getGrossIncome()
{
    return grossIncome;
}

float Paystub::getNetIncome()
{
    return netIncome;
}

float Paystub::getTaxDeductions()
{
    return taxDeductions;
}

float Paystub::getYTDGrossIncome()
{
    return yearToDateGrossIncome;
}

float Paystub::getYTDNetIncome()
{
    return yearToDateNetIncome;
}

float Paystub::getYTDTaxDeductions()
{
    return yearToDateTaxDeductions;
}

string Paystub::getEmployeeName()
{
    return employee->getFullName();
}

int Paystub::getEmployeeID()
{
    return employee->getEmployeeNumber();
}
