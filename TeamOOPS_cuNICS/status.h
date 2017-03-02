#ifndef STATUS_H
#define STATUS_H

#include <stdio.h>
#include "constants.h"
#include "date.h"


class Status
{
private:
    bool                currentlyEmployed;
    EmploymentStatus    employmentStatus;
    EmploymentType      employmentType;
    Date               *startDate;
    Date               *endDate;

public:
    Status();
    Status(bool                currentlyEmployed,
           EmploymentStatus    employmentStatus,
           EmploymentType      employmentType,
           Date               *startDate,
           Date               *endDate);
    ~Status();

    //----- Getters -----
    bool                isEmployed();
    EmploymentStatus    getEmploymentStatus();
    EmploymentType      getEmploymentType();
    Date*               getStartDate();
    Date*               getEndDate();

    //----- Setters -----
    bool setCurrentlyEmployed(bool isEmployed);
    bool setTermPartTimeStatus(Date *startDate, Date *endDate);
    bool setTermFullTimeStatus(Date *startDate, Date *endDate);
    bool setContinuingFullTimeStatus(Date *startDate);
    bool setContinuingPartTimeStatus(Date *startDate);
};

#endif // STATUS_H
