
#pragma once
#include<string>
using namespace std;

class User {
private:
    string username;
    string password;

public:
    User() {}
    User(const string& _username, const string& _password);

    void setUsername(const string& _username);
    void setPassword(const string& _password);

    string getUsername() const;
    string getPassword() const;
};



