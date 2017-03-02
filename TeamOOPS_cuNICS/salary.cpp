#include "salary.h"

Salary::Salary()
{
    Salary(0.0, 1.0);
}

Salary::Salary(float salaryTotal)
{
    Salary(salaryTotal, 1.0);
}

Salary::Salary(float salaryTotal, float deductionPercentage)
{
    this->salaryTotal           = salaryTotal;
    this->deductionPercentage   = deductionPercentage;
}

Salary::~Salary()
{

}

//----- Setters -----
bool Salary::setSalary(float salaryTotal)
{
    if (salaryTotal < 0.0) {
        return false;
    }
    this->salaryTotal = salaryTotal;
    return true;
}

bool Salary::setDeductionPercentage(float deductionPercentage)
{
    if (deductionPercentage < 0.0 ||
        deductionPercentage > 1.0) {
        return false;
    }
    this->deductionPercentage = deductionPercentage;
    return true;
}

//----- Getters -----
float Salary::getSalary()
{
    return salaryTotal;
}

float Salary::getDeductionPercentage()
{
    return deductionPercentage;
}

float Salary::getSalaryAfterDeduction()
{
    return salaryTotal * deductionPercentage;
}
