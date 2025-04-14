#ifndef ISTUDENTACTIONS_H
#define ISTUDENTACTIONS_H
#include "student.h"

class IStudentActions{
    public:
        virtual void viewGrades() = 0;
        virtual ~IStudentActions(){}
};

#endif