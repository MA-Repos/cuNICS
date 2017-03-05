#include "employee.h"

Employee::Employee(string             fName,
                   string             lName,
                   int                employeeNumber,
                   PhoneNumber*       phoneNumber,
                   Address*           address,
                   BankInformation*   bankInformation,
                   int                sin) : User(fName, lName)
{
    this->employeeNumber    = employeeNumber;
    this->phoneNumber       = phoneNumber;
    this->address           = address;
    this->bankInformation   = bankInformation;
    this->sin               = sin;

    this->paystubs          = new QList<Paystub*>();
    this->roles             = new QList<Role*>();
}

Employee::Employee(string             fName,
                   string             lName,
                   int                employeeNumber,
                   PhoneNumber*       phoneNumber,
                   Address*           address,
                   BankInformation*   bankInformation,
                   int                sin,
                   QList<Role*>*      roles,
                   QList<Paystub*>*   paystubs) : User(fName, lName)
{
    this->employeeNumber    = employeeNumber;
    this->phoneNumber       = phoneNumber;
    this->address           = address;
    this->bankInformation   = bankInformation;
    this->sin               = sin;

    this->paystubs          = paystubs;
    this->roles             = roles;
}

Employee::~Employee()
{
    if (phoneNumber != NULL) {
        delete phoneNumber;
    }
    if (address != NULL) {
        delete address;
    }
    if (bankInformation != NULL) {
        delete bankInformation;
    }
    if (paystubs != NULL) {
        delete paystubs;
    }
    while (roles->isEmpty() != true) {
        Role* tempRole = roles->last();
        roles->removeLast();
        delete tempRole;
    }
    delete roles;
}

//----- Getters -----
int Employee::getEmployeeNumber()
{
    return employeeNumber;
}

PhoneNumber* Employee::getPhoneNumber()
{
    return phoneNumber;
}

Address* Employee::getAddress()
{
    return address;
}

BankInformation* Employee::getBankInformation()
{
    return bankInformation;
}

int Employee::getSIN()
{
    return sin;
}

//----- Role Methods -----

int Employee::getNumRoles()
{
    return roles->size();
}

Role* Employee::getRoleAtIndex(int i)
{
    if (i < 0 ||
        i >= roles->size()) {
        return NULL;
    }
    return roles->at(i);
}

bool Employee::addRole(Role* newRole)
{
    if (newRole != NULL) {
        roles->append(newRole);
        return true;
    }
    return false;
}

//----- Paystub Methods -----

int Employee::getNumStubs()
{
    return paystubs->size();
}

Paystub* Employee::getLastPaystub()
{
    if (paystubs->isEmpty()) {
        return NULL;
    }
    return paystubs->last();
}

Paystub* Employee::getPaystubAtIndex(int i)
{
    if (i < 0 ||
        i >= paystubs->size()) {
        return NULL;
    }
    return paystubs->at(i);
}

bool Employee::addPaystub(Paystub *newStub)
{
    if (newStub != NULL) {
        paystubs->append(newStub);
        return true;
    }
    return false;
}

bool Employee::toAttributeList(QMap<string, string>* list)
{
    list->insert("EmployeeNumber",  varToString(this->getEmployeeNumber()));
    list->insert("FirstName",       varToString(this->getFName()));
    list->insert("LastName",        varToString(this->getLName()));
    list->insert("SinNumber",       varToString(this->getSIN()));
    list->insert("PhoneNumber",     varToString(this->getPhoneNumber()->getPhoneNumberAsString()));
    list->insert("Street",          varToString(this->getAddress()->getStreet()));
    list->insert("StreetNumber",    varToString(this->getAddress()->getStreetNumber()));
    list->insert("City",            varToString(this->getAddress()->getCity()));
    list->insert("Province",        varToString(this->getAddress()->getProvince()));
    list->insert("Country",         varToString(this->getAddress()->getCountry()));
    list->insert("PostalCode",      varToString(this->getAddress()->getPostalCode()));
    list->insert("BankName",        varToString(this->getBankInformation()->getBankName()));
    list->insert("BankNumber",      varToString(this->getBankInformation()->getBankNumber()));
    list->insert("BranchNumber",    varToString(this->getBankInformation()->getBranchNumber()));
    list->insert("AccountNumber",   varToString(this->getBankInformation()->getAccountNumber()));

    return true;
}

string Employee::toString()
{
    return
    varToString(this->getEmployeeNumber()) + "  " +
    varToString(this->getFName()) + "  " +
    varToString(this->getLName()) + "  " +
    varToString(this->getSIN()) + "  " +
    varToString(this->getPhoneNumber()->getPhoneNumberAsString()) + "  " +
    varToString(this->getAddress()->getStreet()) + "  " +
    varToString(this->getAddress()->getStreetNumber()) + "  " +
    varToString(this->getAddress()->getCity()) + "  " +
    varToString(this->getAddress()->getProvince()) + "  " +
    varToString(this->getAddress()->getCountry()) + "  " +
    varToString(this->getAddress()->getPostalCode()) + "  " +
    varToString(this->getBankInformation()->getBankName()) + "  " +
    varToString(this->getBankInformation()->getBankNumber()) + "  " +
    varToString(this->getBankInformation()->getBranchNumber()) + "  " +
    varToString(this->getBankInformation()->getAccountNumber());
}
