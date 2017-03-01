#include "user.h"
#include <string>

using namespace std;

User::User()
{
    User("None", "None", "None", "None");
}

User::User(string fName, string lName, string username, string password)
{
    this->fName = fName;
    this->lName = lName;
    this->username = username;
    this->password = password;
}

//Setters
bool User::setFName(string fName)
{
    this->fName = fName;
    return true;
}

bool User::setLName(string lName)
{
    this->lName = lName;
    return true;
}

bool User::setUsername(string username)
{
    this->username = username;
    return true;
}

bool User::setPassword(string password)
{
    this->password = password;
    return true;
}

//Getters
string User::getFName()
{
    return fName;
}

string User::getLName()
{
    return lName;
}

string User::getUsername()
{
    return username;
}
