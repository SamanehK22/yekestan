#include "user.h"
#include "student.h"

Student::Student(string studentName, int stdNum, string password):User(studentName, stdNum, password), average(0), totalUnits(16){}

int Student::getTotalUnits()const
{
    return totalUnits;
}

void Student::enroll(Course* course)
{
    if(!course)return;
    for(const auto* existingCourse : selectedCourses)
    {
        if(existingCourse == course)
        {
            cout<<"course already exists."<<endl;
            return;//course already exists
        }
    }
    if(course->isAvailable())
    {
        if((totalUnits + course->getUnits()) <= 16)
        {
            selectedCourses.push_back(course);
            course->addStudent(this);  
            totalUnits += course->getUnits();
            cout<<getName()<<"enrolled in "<<course->getCourseName()<<endl;      
        }
        else{
            cout<<"Can not enroll.You have reached the maximum units you can choose."<<endl;
            return;
        }
    }
    else{
        cout<<"This course has reached the maximum students."<<endl;
        return;
    }
}

void Student::deleteCourse(Course* course)
{
    for(auto it = selectedCourses.begin(); it != selectedCourses.end(); )
    {
        if(*it == course)
        {
            it = selectedCourses.erase(it); 
            course->removeStudent(this);

        }else
        {
            it++; 
        }
    }
}

void Student::showSelectedCourses()const
{
    cout<<"Selected courses:"<<endl;
    int counter = 1;
    for(const auto& course : selectedCourses)
    {
        cout<<counter<<". "<<course<<endl;
        counter++;
    }
}

Student::~Student(){}
