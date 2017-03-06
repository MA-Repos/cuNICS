#ifndef ROLE_H
#define ROLE_H
#include "constants.h"
#include "status.h"
#include "date.h"
#include "salary.h"
#include <QMap>


class Role
{
private:
    RoleType    roleType;
    Status*     status;
    Salary*     salary;

public:
    Role();
    Role(RoleType roleType);
    Role(RoleType roleType, Status* status, Salary* salary);
    ~Role();

    //----- Getters -----
    QString     getRole();
    Status*     getStatus();

    //----- Setters -----
    bool setRoleType(RoleType roleType);
    bool setStatus(Status* status);
    bool setSalary(Salary* salary);

    bool setRollTermPartTime(RoleType roleType, Date* startDate, Date* endDate);
    bool setRollTermFullTime(RoleType roleType, Date* startDate, Date* endDate);
    bool setRollContinuingPartTime(RoleType roleType, Date* startDate);
    bool setRollContinuingFullTime(RoleType roleType, Date* startDate);

    bool toAttributeList(QMap<string, string>* list);
};

#endif // ROLE_H
