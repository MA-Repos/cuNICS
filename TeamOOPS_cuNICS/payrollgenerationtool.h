#ifndef PAYROLLGENERATIONTOOL_H
#define PAYROLLGENERATIONTOOL_H

#include "user.h"
#include "paystub.h"
#include <qlist.h>
#include <QSqlDatabase>

class PayrollGenerationTool
{
private:
    QList<User*>* employees;
    Paystub* paystubs;
    QSqlDatabase* db;
    int getAllEmployees();
    int notifySuccess();

public:
    PayrollGenerationTool(QSqlDatabase*);
    ~PayrollGenerationTool();
    int generatePaystubs();
    int viewSummary();
};

#endif // PAYROLLGENERATIONTOOL_H
