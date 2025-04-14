#ifndef STUDENT_H
#define STUDENT_H
#include "user.h"
#include "course.h"
using namespace std;

class Student:public User{
    private:
        double average;
        int totalUnits;
        vector<Course*>selectedCourses;
    public:
        Student(string studentName, int stdNum, string password);
        int getTotalUnits()const;
        void enroll(Course* course);
        void deleteCourse(Course* course);
        void showSelectedCourses()const;
        void addResponse();
        void showResponses();
        ~Student();
};

#endif