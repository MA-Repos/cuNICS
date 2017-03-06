#ifndef CONSTANTS
#define CONSTANTS

#include <QDebug>
#include <string>
#include <sstream>

using namespace std;

#define NullCheck(var, ret) \
    if (var==NULL) { \
        qDebug() << "Parameter " << #var << " is NULL"; \
        return ret; \
    }

#define NullCheckNegOne(var)  NullCheck(var, -1);
#define NullCheckFalse(var)   NullCheck(var, false)
#define NullCheckNull(var)    NullCheck(var, NULL)

enum RoleType {
    NO_ROLE,
    TA,
    RA,
    FACULTY,
    STAFF
};

enum EmploymentType {
    NO_TYPE,
    TERM,
    CONTINUING
};

enum EmploymentStatus {
    NO_STATUS,
    FULL_TIME,
    PART_TIME
};

#endif // CONSTANTS

