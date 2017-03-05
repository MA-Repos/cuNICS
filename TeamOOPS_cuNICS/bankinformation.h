#ifndef BANKINFORMATION_H
#define BANKINFORMATION_H

#include <QString>
#include <QMap>

using namespace std;

class BankInformation
{
private:
    int     accountNumber;
    int     bankNumber;
    int     branchNumber;
    QString  bankName;
    QString  clientFName;
    QString  clientLName;

public:
    BankInformation();
    BankInformation(int accountNumber, int bankNumber, int branchNumber, QString bankName, QString clientFName, QString clientLName);
    ~BankInformation();

    //----- Getters -----
    int     getAccountNumber();
    int     getBankNumber();
    int     getBranchNumber();
    QString  getBankName();
    QString  getClientName();
};

#endif // BANKINFORMATION_H
