#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "user.h"
#include "phonenumber.h"
#include "address.h"
#include "bankinformation.h"
#include "role.h"
#include <qlist.h>
#include <QMap>

class Employee : public User
{
private:
    int                 employeeNumber;
    PhoneNumber*        phoneNumber;
    Address*            address;
    BankInformation*    bankInformation;
    QList<Role*>*       roles;
    int                 sin;

public:
    Employee(QString            fName,
             QString            lName,
             int                employeeNumber,
             PhoneNumber*       phoneNumber,
             Address*           address,
             BankInformation*   bankInformation,
             int                sin);

    Employee(QString            fName,
             QString            lName,
             int                employeeNumber,
             PhoneNumber*       phoneNumber,
             Address*           address,
             BankInformation*   bankInformation,
             int                sin,
             QList<Role*>*      roles);
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
    bool        removeRole(QString roleType);

    QString     toQString();
};

#endif // EMPLOYEE_H
