#include "user.h"

User::User(string name, string num, string password):name(name), num(num), password(password){}

User::~User(){}


void User::deleteUser()
{
    isDeleted = false;
}

void User::restoreUser()
{
    isDeleted = true;
}

string& User::getName()
{
    return name;
}

string& User::getNum()
{
    return num;
}

string& User::getPassword()
{
    return password;
}

void User::setName(const string& n)
{
    name = n;
}

void User::setNum(const string& n)
{
    num = n;
}

void User::setPassword(const string& p)
{
    password = p;
}

// void User::changePassword(string& newPassword)
// {
//     //checked the password validation in menu

// }