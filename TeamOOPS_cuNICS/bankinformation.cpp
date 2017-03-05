#include "bankinformation.h"
#include "constants.h"

BankInformation::BankInformation()
{
    BankInformation(0, 0, 0, "None", "None", "None");
}

BankInformation::BankInformation(int accountNumber, int bankNumber, int branchNumber, string bankName, string clientFName, string clientLName)
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

string BankInformation::getBankName()
{
    return bankName;
}

string BankInformation::getClientName()
{
    return clientFName + " " + clientLName;
}
