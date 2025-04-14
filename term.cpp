#include "term.h"

void Term::addCourse(Course* course)
{
    courses.push_back(course);
}

Term::~Term()
{
    for(auto course : courses)
    {
        delete course;
    }
}

void Term::showAllCourses()const
{
    cout<<"Courses offered this semester:"<<endl;
    int counter = 1;
    for(const auto& course : courses)
    {
        cout<<counter<<". "<<course->getCourseName()<<endl; // create a chart for this 
        counter++;
    }
}

void Term::showAvailableCourses()const
{
    cout<<"Courses available in this semester:"<<endl;
    int counter = 1;
    for(const auto* existingCourse : courses)
    {
        if(existingCourse->isAvailable())
        {
            cout<<counter<<". "<<existingCourse->getCourseName()<<endl;
            counter++;
        }
    }
}

