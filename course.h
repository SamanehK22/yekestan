#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "assignment.h"
#include "student.h"
#include "grade.h"
using namespace std;

class Course{
    private:
        string courseName;
        int capacity;//num of students that can enroll in the course
        int units;//vahed
        string master;
        // double studentsAverage;
        // double courseAverage;
        vector <string> announcements;
        vector <HomeWork> hws;
        vector <Student*> students;
    public:
        Course(string courseName, string master, int capacity, int units);
        string getCourseName()const;
        // void getStudentsAverage()const;
        string getMaster();
        int getCapacity()const;
        int getUnits()const;
        bool isAvailable()const;
        void addStudent(Student* student);//when student enrolls in the course
        void removeStudent(const Student* student);//when student deletes the course 
        void showStudents()const;//list of students enrolled to the class
        void setAnnouncement(string text);
        void showAnnouncements()const;
        void deleteAnouncement();
        //assignment for master//
        void addAssignment(const HomeWork& hw);//added by master 
        void showAssignments()const;
        void deleteAssignment();//deleted by master
        //assignment for student//
        void addResponse(HomeWork& hw, const string& responsePath);//add student answer to the hw
        void deleteResponse();//delete student answer to the hw

};

#endif