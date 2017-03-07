#include "role.h"
#include <stdio.h>

Role::Role()
{
    Role(NO_ROLE, NULL, NULL);
}

Role::Role(RoleType roleType)
{
    Role(roleType, NULL, NULL);
}

Role::Role(RoleType roleType, Status* status, Salary* salary)
{
    this->roleType  = roleType;
    this->status    = status;
    this->salary    = salary;
}

Role::Role(QString roleType, Status* status, Salary* salary)
{
        if (roleType == "TA")
            this->roleType = TA;
        else if (roleType == "RA")
            this->roleType = RA;
        else if (roleType == "Faculty")
            this->roleType = FACULTY;
        else
            this->roleType = STAFF;

    this->status    = status;
    this->salary    = salary;
}

Role::~Role()
{
    if (status != NULL) {
        delete status;
    }
}

//----- Getters -----
QString Role::getRole()
{
    switch(roleType)
    {
        case TA:
            return "TA";
        case RA:
            return "RA";
        case FACULTY:
            return "Faculty";
        case STAFF:
            return "Staff";

        default:
            return NULL;
    }
}

Status* Role::getStatus()
{
    return status;
}

Salary* Role::getSalary()
{
    return salary;
}

//----- Setters -----
bool Role::setRoleType(RoleType roleType)
{
    this->roleType = roleType;
    return true;
}

bool Role::setStatus(Status* status)
{
    this->status = status;
    return true;
}

bool Role::setRollTermPartTime(RoleType roleType, Date* startDate, Date* endDate)
{
    this->roleType = roleType;
    if (this->status != NULL) {
        if (this->status->setTermPartTimeStatus(startDate, endDate)) {
            return true;
        }
    }
    return false;
}

bool Role::setRollTermFullTime(RoleType roleType, Date* startDate, Date* endDate)
{
    this->roleType = roleType;
    if (this->status != NULL) {
        if (this->status->setTermFullTimeStatus(startDate, endDate)) {
            return true;
        }
    }
    return false;
}

bool Role::setRollContinuingPartTime(RoleType roleType, Date* startDate)
{
    this->roleType = roleType;
    if (this->status != NULL) {
        if (this->status->setContinuingPartTimeStatus(startDate)) {
            return true;
        }
    }
    return false;
}

bool Role::setRollContinuingFullTime(RoleType roleType, Date* startDate)
{
    this->roleType = roleType;
    if (this->status != NULL) {
        if (this->status->setContinuingFullTimeStatus(startDate)) {
            return true;
        }
    }
    return false;
}

QString Role::toString()
{
    return this->getRole() + "  " +
           this->getStatus()->getEmploymentType() + "  " +
           this->getStatus()->getEmploymentStatus() + "  " +
           QString::number(this->getSalary()->getSalary()) + "  " +
           QString::number(this->getSalary()->getDeductionPercentage());
}
