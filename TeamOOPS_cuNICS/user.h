#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User
{
protected:
    string fName;
    string lName;
    string username;
    string password;

public:
    User();
    User(string fName, string lName);
    User(string fName, string lName, string username, string password);
    ~User();

    //----- Setters -----
    bool setFName(string);
    bool setLName(string);
    bool setUsername(string);
    bool setPassword(string);

    //----- Getters -----
    string getFName();
    string getLName();
    string getFullName();
    string getUsername();

};

#endif // USER_H
