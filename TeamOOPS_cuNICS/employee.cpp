#include "employee.h"
#include <QString>

Employee::Employee(QString             fName,
                   QString             lName,
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

Employee::Employee(QString             fName,
                   QString             lName,
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

bool Employee::toAttributeList(QMap<QString, QString>* list)
{
    list->insert("EmployeeNumber",  QString(this->getEmployeeNumber()));
    list->insert("FirstName",       QString(this->getFName()));
    list->insert("LastName",        QString(this->getLName()));
    list->insert("SinNumber",       QString(this->getSIN()));
    list->insert("PhoneNumber",     QString(this->getPhoneNumber()->getPhoneNumberAsQString()));
    list->insert("Street",          QString(this->getAddress()->getStreet()));
    list->insert("StreetNumber",    QString(this->getAddress()->getStreetNumber()));
    list->insert("City",            QString(this->getAddress()->getCity()));
    list->insert("Province",        QString(this->getAddress()->getProvince()));
    list->insert("Country",         QString(this->getAddress()->getCountry()));
    list->insert("PostalCode",      QString(this->getAddress()->getPostalCode()));
    list->insert("BankName",        QString(this->getBankInformation()->getBankName()));
    list->insert("BankNumber",      QString(this->getBankInformation()->getBankNumber()));
    list->insert("BranchNumber",    QString(this->getBankInformation()->getBranchNumber()));
    list->insert("AccountNumber",   QString(this->getBankInformation()->getAccountNumber()));

    return true;
}

QString Employee::toQString()
{
    return
        QString::number(this->getEmployeeNumber()) + "  " +
        getFName() + "  " +
        getLName() + "  " +
        QString::number(this->getSIN()) + "  " +
        QString(this->getPhoneNumber()->getPhoneNumberAsQString()) + "  " +
        this->getAddress()->getStreet() + "  " +
        QString::number(this->getAddress()->getStreetNumber()) + "  " +
        this->getAddress()->getCity() + "  " +
        this->getAddress()->getProvince() + "  " +
        this->getAddress()->getCountry() + "  " +
        this->getAddress()->getPostalCode() + "  " +
        this->getBankInformation()->getBankName() + "  " +
        QString::number(this->getBankInformation()->getBankNumber()) + "  " +
        QString::number(this->getBankInformation()->getBranchNumber()) + "  " +
        QString::number(this->getBankInformation()->getAccountNumber());
}
