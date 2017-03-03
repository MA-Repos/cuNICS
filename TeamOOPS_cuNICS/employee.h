#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "user.h"
#include "address.h"
#include "role.h"
#include "salary.h"
#include "paystub.h"
#include <qlist.h>

class Paystub;

class Employee : public User
{
private:
    int                 employeeNumber;
    Address*            address;
    QList<Role*>*       roles;
    Salary*             salary;
    int                 sin;
    QList<Paystub*>*    paystubs;

public:
    Employee(string     fName,
             string     lName,
             int        employeeNumber,
             Address*   address,
             Salary*    salary,
             int        sin);

    Employee(string             fName,
             string             lName,
             int                employeeNumber,
             Address*           address,
             Salary*            salary,
             int                sin,
             QList<Role*>*      roles,
             QList<Paystub*>*   paystubs);
    ~Employee();

    //----- Getters -----
    int         getEmployeeNumber();
    Address*    getAddress();
    Salary*     getSalary();
    int         getSIN();

    int         getNumRoles();
    Role*       getRoleAtIndex(int i);
    bool        addRole(Role* newRole);

    int         getNumStubs();
    Paystub*    getLastPaystub();
    Paystub*    getPaystubAtIndex(int i);
    bool        addPaystub(Paystub* newStub);
};

#endif // EMPLOYEE_H
