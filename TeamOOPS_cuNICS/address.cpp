#include "address.h"
#include "constants.h"

Address::Address()
{
    Address("None", 0, "None", "None", "None", "None");
}

Address::Address(string street,
                 int    streetNumber,
                 string city,
                 string province,
                 string country,
                 string postalCode)
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
bool Address::setStreet(string street)
{
    this->street = street;
    return true;
}

bool Address::setStreetNumber(int streetNumber)
{
    this->streetNumber = streetNumber;
    return true;
}

bool Address::setCity(string city)
{
    this->city = city;
    return true;
}

bool Address::setProvince(string province)
{
    this->province = province;
    return true;
}

bool Address::setCountry(string country)
{
    this->country = country;
    return true;
}

bool Address::setPostalCode(string postalCode)
{
    this->postalCode = postalCode;
    return true;
}

//----- Getters -----
string Address::getStreet()
{
    return street;
}

int Address::getStreetNumber()
{
    return streetNumber;
}

string  Address::getCity()
{
    return city;
}

string Address::getProvince()
{
    return province;
}

string Address::getCountry()
{
    return country;
}

string Address::getPostalCode()
{
    return postalCode;
}

bool Address::toAttributeList(QMap<string, string>* list)
{
    list->insert("Street",       this->getStreet());
    list->insert("StreetNumber", numberToString(this->getStreetNumber()));
    list->insert("City",         this->getCity());
    list->insert("Country",      this->getCountry());
    list->insert("PostalCode",   this->getPostalCode());

    return true;
}
