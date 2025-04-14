#ifndef MASTER_H
#define MASTER_H
#include <iostream>
#include <string>
#include "user.h"
#include "course.h"
using namespace std;

class Master: public User{
    private:
        vector<Course*>course;
    public:
       Master(string masterName, int masterNum, string password);
       void showStudentList(Course* course);
       void addCourse();
       void showCourseList();
       void addAssignment(Course* course, string& title, string& description, string& filePath);
       void deleteAssignment(Course* course);
       void showAssignments(Course* course);
       void addAnnouncement(Course* course);
       void deleteAnnouncement(Course* course);
       void showAnnouncements(Course* course); 
};

#endif