#include "address.h"
#include "constants.h"

Address::Address()
{
    Address("None", 0, "None", "None", "None", "None");
}

Address::Address(QString street,
                 int    streetNumber,
                 QString city,
                 QString province,
                 QString country,
                 QString postalCode)
{
    this->street        = street;
    this->streetNumber  = streetNumber;
    this->city          = city;
    this->province      = province;
    this->country       = country;
    this->postalCode    = postalCode;
}

Address::~Address()
{

}

//----- Setters -----
bool Address::setStreet(QString street)
{
    this->street = street;
    return true;
}

bool Address::setStreetNumber(int streetNumber)
{
    this->streetNumber = streetNumber;
    return true;
}

bool Address::setCity(QString city)
{
    this->city = city;
    return true;
}

bool Address::setProvince(QString province)
{
    this->province = province;
    return true;
}

bool Address::setCountry(QString country)
{
    this->country = country;
    return true;
}

bool Address::setPostalCode(QString postalCode)
{
    this->postalCode = postalCode;
    return true;
}

//----- Getters -----
QString Address::getStreet()
{
    return street;
}

int Address::getStreetNumber()
{
    return streetNumber;
}

QString  Address::getCity()
{
    return city;
}

QString Address::getProvince()
{
    return province;
}

QString Address::getCountry()
{
    return country;
}

QString Address::getPostalCode()
{
    return postalCode;
}
