#include "course.h"

Course::Course(string courseName, string master, int capacity, int units):courseName(courseName), master(master), capacity(capacity), units(units){}

string Course::getCourseName()const
{
    return courseName;
}

string Course::getMaster()
{
    return master;
}

int Course::getCapacity()const
{
    return capacity;
}

int Course::getUnits()const
{
    return units;
}

bool Course::isAvailable()const
{
    return capacity > 0;
}

void Course::showStudents()const
{
    if(students.empty())
    {
        cout<<"No students are enrolled in this course."<<endl;
        return;
    }
    int counter = 1;
    cout<<courseName<<"  Stusents:"<<endl;
    for(const auto& Student:students)
    {
        cout<<counter<<". "<<Student->getName()<<endl;
        counter++;
    }
}

void Course::showAnnouncements()const
{
    if(announcements.empty())
    {
        cout<<"No announcement has been uploaded."<<endl;
        return;
    }
    int counter = 1;
    for(const auto& announcement:announcements)
    {
        cout<<counter<<". "<<announcement<<endl;
        counter++;
    }
}

void Course::setAnnouncement(string text)
{
    announcements.push_back(text); 
}

void Course::deleteAnouncement()
{
    if(announcements.empty())
    {
        cout<<"No announcement has been uploaded."<<endl;
        return;
    }
    showAnnouncements();
    cout<<"Please choose the number of the announcement you want to delete."<<endl;
    int num; 
    cin>>num;
    announcements.erase(announcements.begin() + (num - 1));
    cout<<"Announcement deleted successfully."<<endl;
}

void Course::addAssignment(const HomeWork& hw)
{
    hws.push_back(hw);
}

void Course::showAssignments()const
{
    int counter = 1;
    for(const auto& HomeWork: hws)
    {
        cout<<counter<<". "<<HomeWork.getTitle()<<endl;////////////create a chart to show it better and full
    }
}

void Course::deleteAssignment()
{
    if(hws.empty())
    {
        cout<<"There are no assignments to delete."<<endl;
        return;
    }
    showAssignments();
    cout<<"Please enter the number of the assignment you want to delete."<<endl;
    int num;
    cin>>num;
    // if(num < 1 || num > hws.size())
    // {
    //     cout<<"Invalid assignment number."<<endl;
    //     return;
    // }
    string deletedHw = hws[num-1].getTitle();
    hws.erase(hws.begin()+(num-1));
    cout << "Assignment '" << deletedHw << "' deleted successfully." << endl;
}

//student//

void Course::addStudent(Student* student)
{
    students.push_back(student);
    capacity--;
}

void Course::removeStudent(const Student* student)
{
    for(auto it = students.begin(); it != students.end(); it++)
    {
        if(*it == student)
        {
            students.erase(it);
            cout<<"Student removed successfully"<<endl;
            return;
        }
    }
    cout<<"there is no student with this info or you havent attend to this course."<<endl;///???????????????????????///idk where should i use this
}

void Course::addResponse(HomeWork& hw, const string& responsePath)
{
    hw.addResponse(responsePath);
}

void Course::deleteResponse()
{

}