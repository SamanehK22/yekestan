#include "grade.h"

Grade::Grade():midterm(0), finalExam(0), assignments(0), total(0), average(0) {}
void Grade::setMidtermGrade(Student* student, double grade)
{
    midterm = grade;
}

