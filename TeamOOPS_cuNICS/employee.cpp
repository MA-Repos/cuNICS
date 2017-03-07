#include "employee.h"
#include <QString>

//using namespace std;

Employee::Employee(QString            fName,
                   QString            lName,
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

    this->roles             = new QList<Role*>();
}

Employee::Employee(QString            fName,
                   QString            lName,
                   int                employeeNumber,
                   PhoneNumber*       phoneNumber,
                   Address*           address,
                   BankInformation*   bankInformation,
                   int                sin,
                   QList<Role*>*      roles) : User(fName, lName)
{
    this->employeeNumber    = employeeNumber;
    this->phoneNumber       = phoneNumber;
    this->address           = address;
    this->bankInformation   = bankInformation;
    this->sin               = sin;

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
    while (!roles->isEmpty()) {
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

bool Employee::removeRole(QString roleType)
{
    for (int i=0;i<this->getNumRoles();i++){
        if (this->getRoleAtIndex(i)->getRole() == roleType) {
            this->roles->removeAt(i);
            return true;
        }
    }

    return false;
}

QString Employee::toQString()
{
    QString roleInfo = "";
    for (int i=0; i<this->getNumRoles(); i++){
        roleInfo += this->getRoleAtIndex(i)->toString();
        roleInfo += "  ";
    }

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
        QString::number(this->getBankInformation()->getAccountNumber()) +
        roleInfo;
}
