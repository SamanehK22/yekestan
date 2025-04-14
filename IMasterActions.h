#ifndef IMASTERACTIONS_H
#define IMASTERACTIONS_H
#include "student.h"

class IMasterActions{
    public:
        virtual void setMidtermGrade(Student* student, double grade) = 0;//score for midterm
        virtual void setFinalExamGrade(Student* student, double grade) = 0; //score for final
        virtual void setAssignmentGrade(Student* student, double grade) = 0;//score for assignments
        virtual ~IMasterActions(){}
};


#endif