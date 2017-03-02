#ifndef ROLE_H
#define ROLE_H
#include "constants.h"
#include "status.h"
#include "date.h"

class Role
{
private:
    RoleType    roleType;
    Status*     status;
public:
    Role();
    Role(RoleType roleType);
    Role(RoleType roleType, Status* status);
    ~Role();

    //----- Getters -----
    RoleType    getRole();
    Status*     getStatus();

    //----- Setters -----
    bool setRoleType(RoleType roleType);
    bool setStatus(Status* status);

    bool setRollTermPartTime(RoleType roleType, Date* startDate, Date* endDate);
    bool setRollTermFullTime(RoleType roleType, Date* startDate, Date* endDate);
    bool setRollContinuingPartTime(RoleType roleType, Date* startDate);
    bool setRollContinuingFullTime(RoleType roleType, Date* startDate);
};

#endif // ROLE_H
