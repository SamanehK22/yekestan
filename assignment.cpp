#include "assignment.h"

HomeWork::HomeWork(string title, string description, string filePath):title(title), description(description), filePath(filePath){}
string HomeWork::getTitle()const
{
    return title;
}

string HomeWork::getDescription()const
{
    return description;
}

string HomeWork::getFilePath()const
{
    return filePath;
}

void HomeWork::addResponse(const string& response)
{
    
}

// void HomeWork::showResponses()const
// {
//     int counter = 1;
//     for(const auto& submission:submissionPath)
//     {
//         cout<<counter<<". "<<submission<<endl;
//     }
// }

// void HomeWork::deleteSubmission()
// {
//     if(submissionPath.empty())
//     {
//         cout<<"No submission has been uploaded."<<endl;
//         return;
//     }
//     int num;
//     cin>>num;
//     submissionPath.erase(submissionPath.begin()+(num-1));
//     cout<<"Submission "<<num<<" deleted successfully"<<endl;
// }