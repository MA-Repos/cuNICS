#ifndef PAYROLLGENERATIONTOOL_H
#define PAYROLLGENERATIONTOOL_H

#include "user.h"
#include "paystub.h"
#include "date.h"
#include <qlist.h>

class PayrollGenerationTool
{
private:
    QList<User*>* employees;
    Paystub* paystubs;
    int getAllEmployees();
    int notifySuccess();

public:
    PayrollGenerationTool();
    ~PayrollGenerationTool();
    int generatePaystubs(Date*);
    int viewSummary();
};

#endif // PAYROLLGENERATIONTOOL_H
