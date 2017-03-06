#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "user.h"
#include "phonenumber.h"
#include "address.h"
#include "bankinformation.h"
#include "role.h"
#include "paystub.h"
#include <qlist.h>
#include <QMap>

class Paystub;

class Employee : public User
{
private:
    int                 employeeNumber;
    PhoneNumber*        phoneNumber;
    Address*            address;
    BankInformation*    bankInformation;
    QList<Role*>*       roles;
    int                 sin;
    QList<Paystub*>*    paystubs;

public:
    Employee(QString             fName,
             QString             lName,
             int                employeeNumber,
             PhoneNumber*       phoneNumber,
             Address*           address,
             BankInformation*   bankInformation,
             int                sin);

    Employee(QString             fName,
             QString             lName,
             int                employeeNumber,
             PhoneNumber*       phoneNumber,
             Address*           address,
             BankInformation*   bankInformation,
             int                sin,
             QList<Role*>*      roles,
             QList<Paystub*>*   paystubs);
    ~Employee();

    //----- Getters -----
    int                 getEmployeeNumber();
    PhoneNumber*        getPhoneNumber();
    Address*            getAddress();
    BankInformation*    getBankInformation();
    int                 getSIN();

    //----- Role Methods -----
    int         getNumRoles();
    Role*       getRoleAtIndex(int i);
    bool        addRole(Role* newRole);

    //----- Paystub Methods -----
    int         getNumStubs();
    Paystub*    getLastPaystub();
    Paystub*    getPaystubAtIndex(int i);
    bool        addPaystub(Paystub* newStub);
    bool        toAttributeList(QMap<QString, QString> *list);
    QString     toQString();
};

#endif // EMPLOYEE_H
