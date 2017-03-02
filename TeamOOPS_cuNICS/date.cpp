#include "date.h"

Date::Date()
{

}

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->year = year;
    this->month = month;
}

Date::~Date()
{

}

//----- Getters -----
int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}
