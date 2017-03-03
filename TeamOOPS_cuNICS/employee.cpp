#include "employee.h"

Employee::Employee(string     fName,
                   string     lName,
                   int        employeeNumber,
                   Address*   address,
                   Salary*    salary,
                   int        sin) : User(fName, lName)
{
    this->employeeNumber    = employeeNumber;
    this->address           = address;
    this->salary            = salary;
    this->sin               = sin;

    this->paystubs          = new QList<Paystub*>();
    this->roles             = new QList<Role*>();
}

Employee::Employee(string     fName,
                   string     lName,
                   int        employeeNumber,
                   Address*   address,
                   Salary*    salary,
                   int        sin,
                   QList<Role*>*      roles,
                   QList<Paystub*>*   paystubs) : User(fName, lName)
{
    this->employeeNumber    = employeeNumber;
    this->address           = address;
    this->salary            = salary;
    this->sin               = sin;

    this->paystubs          = paystubs;
    this->roles             = roles;
}

Employee::~Employee()
{
    if (address != NULL) {
        delete address;
    }
    if (salary != NULL) {
        delete salary;
    }
    if (paystubs != NULL) {
        delete paystubs;
    }
    while (roles->isEmpty() != true) {
        Role* tempRole = roles->last();
        roles->removeLast();
        delete tempRole;
    }
    delete roles;
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

Salary* Employee::getSalary()
{
    return salary;
}

int Employee::getSIN()
{
    return sin;
}

int Employee::getNumRoles()
{
    return roles->size();
}

Role* Employee::getRoleAtIndex(int i)
{
    if (i < 0 ||
        i >= roles->size()) {
        return NULL;
    }
    return roles->at(i);
}

bool Employee::addRole(Role* newRole)
{
    if (newRole != NULL) {
        roles->append(newRole);
        return true;
    }
    return false;
}

int Employee::getNumStubs()
{
    return paystubs->size();
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
    if (newStub != NULL) {
        paystubs->append(newStub);
        return true;
    }
    return false;
}
