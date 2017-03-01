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
    User(string fName, string lName, string username, string password);

    //Setters
    bool setFName(string);
    bool setLName(string);
    bool setUsername(string);
    bool setPassword(string);

    //Getters
    string getFName();
    string getLName();
    string getUsername();



};

#endif // USER_H
