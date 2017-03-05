#include "employee.h"

Employee::Employee(string     fName,
                   string     lName,
                   int        employeeNumber,
                   Address*   address,
                   Role*      role,
                   Salary*    salary,
                   int        sin) : User(fName, lName)
{
    this->employeeNumber    = employeeNumber;
    this->address           = address;
    this->role              = role;
    this->salary            = salary;
    this->sin               = sin;

    this->paystubs          = new QList<Paystub*>();
}



Employee::~Employee()
{
    if (address != NULL) {
        delete address;
    }
    if (role != NULL) {
        delete role;
    }
    if (salary != NULL) {
        delete salary;
    }
    if (paystubs != NULL) {
        delete paystubs;
    }
}

//----- Getters -----
int Employee::getEmployeeNumber()
{
    return employeeNumber;
}

Address* Employee::getAddress()
{
    return address;
}

Role* Employee::getRole()
{
    return role;
}

Salary* Employee::getSalary()
{
    return salary;
}

int Employee::getSIN()
{
    return sin;
}

Paystub* Employee::getLastPaystub()
{
    if (paystubs->isEmpty()) {
        return NULL;
    }
    return paystubs->last();
}

Paystub* Employee::getPaystubAtIndex(int i)
{
    if (i < 0 ||
        i >= paystubs->size()) {
        return NULL;
    }
    return paystubs->at(i);
}

bool Employee::addPaystub(Paystub *newStub)
{
    if (newStub != 0) {
        paystubs->append(newStub);
        return true;
    }
    return false;
}
