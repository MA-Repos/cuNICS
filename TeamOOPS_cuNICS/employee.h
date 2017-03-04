#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "user.h"
#include "address.h"
#include "role.h"
#include "paystub.h"
#include <qlist.h>
#include <QMap>

class Paystub;

class Employee : public User
{
private:
    int                 employeeNumber;
    Address*            address;
    QList<Role*>*       roles;
    int                 sin;
    QList<Paystub*>*    paystubs;

public:
    Employee(string     fName,
             string     lName,
             int        employeeNumber,
             Address*   address,
             int        sin);

    Employee(string             fName,
             string             lName,
             int                employeeNumber,
             Address*           address,
             int                sin,
             QList<Role*>*      roles,
             QList<Paystub*>*   paystubs);
    ~Employee();

    //----- Getters -----
    int         getEmployeeNumber();
    Address*    getAddress();
    int         getSIN();

    //----- Role Methods -----
    int         getNumRoles();
    Role*       getRoleAtIndex(int i);
    bool        addRole(Role* newRole);

    //----- Paystub Methods -----
    int         getNumStubs();
    Paystub*    getLastPaystub();
    Paystub*    getPaystubAtIndex(int i);
    bool        addPaystub(Paystub* newStub);
    bool        toAttributeList(QMap<string, string>* list);
};

#endif // EMPLOYEE_H
