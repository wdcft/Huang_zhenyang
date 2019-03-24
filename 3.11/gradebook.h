#include <iostream>
#include <string>
using namespace std;
class GradeBook
{
public:
GradeBook(string d,string e)
{
    setCourseName(d);
    setTeacherName(e);
}
void setCourseName(string fg)
{
    coursename=fg;
}
string getCourseName()
{
    return coursename;
}
void setTeacherName(string o)
{
    TeacherName=o;
}
string getTeacherName()
{
    return TeacherName;
}
string displayMessage()
{
    cout<<"Welcome to "<<getCourseName()<<"This course is presented by "<<getTeacherName();
}
private:

        string TeacherName;
        string coursename;

};

