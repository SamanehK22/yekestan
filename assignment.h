#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#include <iostream>
#include <string>
#include <map>
using namespace std;

class HomeWork{
    private:
        string title;
        string description;
        string filePath;//assignment that master uploaded
        map<string, string>responses;//response that a student uploaded for a hw
    public:
        HomeWork(string title, string description, string filePth);
        string getTitle()const;
        string getDescription()const;    
        string getFilePath()const;
        void addResponse(const string& response);
        void showResponses()const;
};

#endif