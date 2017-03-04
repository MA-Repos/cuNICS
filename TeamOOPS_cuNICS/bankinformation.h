#ifndef BANKINFORMATION_H
#define BANKINFORMATION_H

#include <string>
#include <QMap>

using namespace std;

class BankInformation
{
private:
    int     accountNumber;
    int     bankNumber;
    int     branchNumber;
    string  bankName;
    string  clientFName;
    string  clientLName;

public:
    BankInformation();
    BankInformation(int accountNumber, int bankNumber, int branchNumber, string bankName, string clientFName, string clientLName);
    ~BankInformation();

    //----- Getters -----
    int     getAccountNumber();
    int     getBankNumber();
    int     getBranchNumber();
    string  getBankName();
    string  getClientName();
    bool    toAttributeList(QMap<string, string>* list);
};

#endif // BANKINFORMATION_H
