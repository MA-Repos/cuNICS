#include "phonenumber.h"
#include <sstream>

PhoneNumber::PhoneNumber()
{
    PhoneNumber("0","0","0","0");
}

PhoneNumber::PhoneNumber(QString countryCode, QString areaCode, QString localNumber, QString extension)
{
    this->countryCode   = countryCode;
    this->areaCode      = areaCode;
    this->localNumber   = localNumber;

    if (extension == NULL)
        this->extension = "";
    else
        this->extension = extension;
}

PhoneNumber::~PhoneNumber()
{

}

//----- Getters -----
QString PhoneNumber::getPhoneNumberAsQString()
{
    return this->countryCode +
           this->areaCode +
           this->localNumber +
           this->extension;
}


