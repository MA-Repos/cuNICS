#include "payrollgenerationtool.h"

PayrollGenerationTool::PayrollGenerationTool(QSqlDatabase* db)
{
    this->db = db;
    this->paystubs = NULL;
    this->employees = NULL;
}

int PayrollGenerationTool::getAllEmployees()
{
    NullCheckNeg1(db);
    this->employees = new QList<User*>;

    return 0;
}

int PayrollGenerationTool::generatePaystubs()
{
    return 0;
}

int PayrollGenerationTool::viewSummary()
{
    return 0;
}

int PayrollGenerationTool::notifySuccess()
{
    return 0;
}

//private:
//    QList<User*>* employees;
//    Paystub* paystub;
//    QSqlDatabase* db;

//public:
//    PayrollGenerationTool(QSqlDatabase*);
//    ~PayrollGenerationTool();
//    int getAllEmployees(QList<User*>*);
//    int generatePaystubs();
//    int viewSummary();
//    int notifySuccess();
