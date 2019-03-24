#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;
int main()
{
   string nameOfCourse,nameOfTeacher;
   GradeBook myGradeBook1(nameOfCourse);
   GradeBook myGradeBook2(nameOfTeacher);
   cout<<"The courseName is: "<<myGradeBook1.getcourseName()<<"\n"<<endl;
   cout<<"Please enter the course name:"<<endl;
   getline(cin,nameOfCourse);
   myGradeBook1.setcourseName(nameOfCourse);
   cout<<"The teacherName is: "<<myGradeBook2.getteacherName()<<"\n"<<endl;
   cout<<"Please enter the teacher name:"<<endl;
   getline(cin,nameOfTeacher);
   myGradeBook2.setteacherName(nameOfTeacher);
   myGradeBook1.displayerMessage1();
   myGradeBook2.displayerMessage2();


}
