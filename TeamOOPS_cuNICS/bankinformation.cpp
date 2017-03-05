#include "bankinformation.h"
#include "constants.h"

BankInformation::BankInformation()
{
    BankInformation(0, 0, 0, "None", "None", "None");
}

BankInformation::BankInformation(int accountNumber, int bankNumber, int branchNumber, QString bankName, QString clientFName, QString clientLName)
{
    this->accountNumber = accountNumber;
    this->bankNumber    = bankNumber;
    this->branchNumber  = branchNumber;
    this->bankName      = bankName;
    this->clientFName   = clientFName;
    this->clientLName   = clientLName;
}

BankInformation::~BankInformation()
{

}

//----- Getters -----
int BankInformation::getAccountNumber()
{
    return accountNumber;
}

int BankInformation::getBankNumber()
{
    return bankNumber;
}

int BankInformation::getBranchNumber()
{
    return branchNumber;
}

QString BankInformation::getBankName()
{
    return bankName;
}

QString BankInformation::getClientName()
{
    return clientFName + " " + clientLName;
}
