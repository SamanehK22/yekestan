#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
using namespace std;

class User{
    private:
        string name;
        string num; //i mean sth for each role to be considered as a username(exp.std num)
        string password;
        bool isDeleted = true;
    public:
        User(string name, string num, string password);
        ~User();
        // void changePassword(string& newPassword);
        void deleteUser();
        void restoreUser();
        string& getName();
        string& getNum();
        string& getPassword();
        void setName(const string& n);
        void setNum(const string& n);
        void setPassword(const string& p);
};

#endif