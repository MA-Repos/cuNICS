#include "paystub.h"

Paystub::Paystub(Date*       date,
                 float       grossIncome,
                 float       deductions,
                 float       yearToDateGrossIncome,
                 float       yearToDateDeductions,
                 Employee*   employee)
{
    this->date                      = date;
    this->grossIncome               = grossIncome;
    this->netIncome                 = grossIncome - deductions;
    this->deductions                = deductions;
    this->yearToDateGrossIncome     = yearToDateGrossIncome;
    this->yearToDateNetIncome       = yearToDateGrossIncome - yearToDateDeductions;
    this->yearToDateDeductions      = yearToDateDeductions;
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

float Paystub::getDeductions()
{
    return deductions;
}

float Paystub::getYTDGrossIncome()
{
    return yearToDateGrossIncome;
}

float Paystub::getYTDNetIncome()
{
    return yearToDateNetIncome;
}

float Paystub::getYTDDeductions()
{
    return yearToDateDeductions;
}

string Paystub::getEmployeeName()
{
    return employee->getFullName();
}

int Paystub::getEmployeeID()
{
    //TODO: Implement
    return 0;
}

bool Paystub::toAttributeList(QMap<string, string>* list)
{
    list->insert("Date",           varToString(this->getDate())); //TODO: date->printDate()
    list->insert("GrossIncome",    varToString(this->getGrossIncome()));
    list->insert("NetIncome",      varToString(this->getNetIncome()));
    list->insert("Deductions",     varToString(this->getDeductions()));
    list->insert("YTDGrossIncome", varToString(this->getYTDGrossIncome()));
    list->insert("YTDNetIncome",   varToString(this->getYTDNetIncome()));
    list->insert("YTDDeductions",  varToString(this->getYTDDeductions()));
    list->insert("YTDEmployeeID",  varToString(this->getEmployeeID()));

    return true;
}

