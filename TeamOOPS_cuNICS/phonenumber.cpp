#include "phonenumber.h"
#include <sstream>
#include <QString>

PhoneNumber::PhoneNumber()
{
    PhoneNumber(0,0,0,0);
}

PhoneNumber::PhoneNumber(int countryCode, int areaCode, int localNumber, int extension)
{
    this->countryCode   = countryCode;
    this->areaCode      = areaCode;
    this->localNumber   = localNumber;
    this->extension     = extension;
}

PhoneNumber::~PhoneNumber()
{

}

//----- Getters -----
QString PhoneNumber::getPhoneNumberAsQString()
{
    //convert the phone number to a string
    ostringstream convert;
    convert << countryCode;
    convert << areaCode;
    convert << localNumber;
    convert << extension;

    return QString(convert.str().c_str());
}


