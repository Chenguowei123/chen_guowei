#include<iostream>
#include<string>
using namespace std;
class GradeBook
{
public:
    explicit GradeBook(string name);
    void setcourseName(string name);
    string getcourseName() const;
    void setteacherName(string name);
    string getteacherName() const;
    void displayerMessage1() const;
    void displayerMessage2() const;
private:
    string courseName,teacherName;

};
