#ifndef SALARY_H
#define SALARY_H

#include <string>
#include <QMap>

using namespace std;

class Salary
{
private:
    float salaryTotal;
    float deductionPercentage;

public:
    Salary();
    Salary(float salaryTotal);
    Salary(float salaryTotal, float deductionPercentage);
    ~Salary();

    //----- Setters -----
    bool setSalary(float salaryTotal);
    bool setDeductionPercentage(float deductionPercentage);

    //----- Getters -----
    float getSalary();
    float getDeductionPercentage();
    float getSalaryAfterDeduction();

    bool  toAttributeList(QMap<string, string>* list);
};

#endif // SALARY_H
