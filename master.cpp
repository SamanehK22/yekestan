#include "master.h"

Master::Master(string masterName, int masterNum, string password):User(masterName, masterNum, password){}

Master::~Master()
{
    for(Course* c : course)
    {
        delete c; 
    }
}

void Master::showStudentList(Course* course)
{
    course->showStudents();
}

void Master::addCourse()
{
    string courseName, masterName;
    int capacity, unit;
    cout << "Enter course name: ";
    getline(cin, courseName);
    cout<<"Please define a capacity for the course."<<endl;
    cin>>capacity;
    cout<<"Please define a unit for the course."<<endl;
    cin>>unit;

    for(const Course* c : course)
    {
        if(c->getCourseName() == courseName)
        {
            cerr<< "Error: Course already exists!"<<endl;
            return;
        }
    }

    masterName = this->getName();
    Course* newCourse = new Course(courseName, masterName, capacity, unit);
    course.push_back(newCourse);
    cout<<"Course added successfully!"<<endl;
}

void Master::showCourseList()
{
    if(course.empty())
    {
        cout<<"No course has been created."<<endl;
        return;
    }
    int counter = 1;
    for(const auto& Course:course)
    {
        cout<<counter<<". "<<Course->getCourseName()<<endl;
        counter++;
    }
}

void Master::addAssignment(Course* course, string& title, string& description, string& filePath)
{
    HomeWork newHW(title, description, filePath);
    course->addAssignment(newHW);
}

void Master::deleteAssignment(Course* course)
{
    course->deleteAssignment();
}

void Master::showAssignments(Course* course)
{
    course->showAssignments();
}

void Master::addAnnouncement(Course* course)
{
    cout<<"Please enter the announcement you want to publish."<<endl;
    string announcement;
    cin>>announcement;
    course->setAnnouncement(announcement);
}

void Master::deleteAnnouncement(Course* course)
{
    course->deleteAnouncement();
}

void Master::showAnnouncements(Course* course)
{
    course->showAnnouncements();
} 
