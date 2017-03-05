#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "user.h"
#include "address.h"
#include "role.h"
#include "salary.h"
#include "paystub.h"
#include <qlist.h>
#include <QMap>

class Paystub;

class Employee : public User
{
private:
    int                 employeeNumber;
    Address*            address;
    Role*               role;
    Salary*             salary;
    int                 sin;
    QList<Paystub*>*    paystubs;

public:
    Employee(string     fName,
             string     lName,
             int        employeeNumber,
             Address*   address,
             Role*      role,
             Salary*    salary,
             int        sin);

    ~Employee();

    //----- Getters -----
    int         getEmployeeNumber();
    Address*    getAddress();
    Role*       getRole();
    Salary*     getSalary();
    int         getSIN();

    Paystub*    getLastPaystub();
    Paystub*    getPaystubAtIndex(int i);

    bool        addPaystub(Paystub* newStub);
    bool        toAttributeList(QMap<string, string>* list);
};

#endif // EMPLOYEE_H
