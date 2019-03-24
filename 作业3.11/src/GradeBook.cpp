#include<iostream>
#include"GradeBook.h"
using namespace std;

    GradeBook::GradeBook(string name)
        :courseName(name),teacherName(name)
    {

    }
    void GradeBook::setcourseName(string name)
    {
        courseName  = name;
    }
    string GradeBook::getcourseName() const
    {
        return courseName;
    }

    void GradeBook::setteacherName(string name)
    {
        teacherName = name;
    }
    string GradeBook::getteacherName() const
    {
        return teacherName;
    }
    void GradeBook::displayerMessage1() const
    {
        cout<<"Welcome to the grade book for:" <<getcourseName()<<"!"<<"\n"<<endl;
    }
    void GradeBook::displayerMessage2() const
    {
        cout<<"This course is presented by:"<<getteacherName()<<"\n"<<endl;
    }
