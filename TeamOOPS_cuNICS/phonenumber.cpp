#include "phonenumber.h"
#include <sstream>
#include <QString>

PhoneNumber::PhoneNumber()
{
    PhoneNumber(" "," "," "," ");
}

PhoneNumber::PhoneNumber(QString countryCode, QString areaCode, QString localNumber, QString extension)
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
   return this->countryCode+
    this->areaCode+
    this->localNumber+
    this->extension;


}

QString PhoneNumber::getLocalNumber(){
return this->localNumber;
}

QString PhoneNumber::getCountryCode(){
return this->countryCode;
}

QString PhoneNumber::getExtension(){
return this->extension;
}

QString PhoneNumber::getLocalCode(){
return this->areaCode;
}


