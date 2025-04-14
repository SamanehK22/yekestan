#ifndef TERM_H
#define TERM_H
#include "course.h"

class Term{
    private:
        string termNum;
        vector<Course*>courses;
    public:
        void addCourse(Course* course);
        void showAllCourses()const;
        void showAvailableCourses()const;
        ~Term();
};

#endif