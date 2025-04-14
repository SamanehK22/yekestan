#ifndef GRADE_H
#define GRADE_H
#include "IMasterActions.h"
#include "IStudentActions.h"

class Grade:public IMasterActions, IStudentActions{
    private:
        double studentsAverage;///average score of all the students in one course
        double courseAverage;//average score of a course signed by its students 
        double midterm;//students midterm scores
        double finalExam;//students final scores
        double assignments;//students assignments scores
        double total;//total score for one course
        double average;//average score for all courses
    public:
        Grade();
        void setMidtermGrade(Student* student, double grade)override;
    
};

#endif