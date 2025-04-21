#include "User.h"

User::User(const string& _username, const string& _password)
    : username(_username), password(_password) {
}

void User::setUsername(const string& _username) { username = _username; }
void User::setPassword(const string& _password) { password = _password; }

string User::getUsername() const { return username; }
string User::getPassword() const { return password; }

