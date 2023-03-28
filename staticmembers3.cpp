#include <iostream>
using namespace std;
class student
{
    public:
    int rollno;
    string name;
    static int addminno;
    student(string n)
    {
        addminno++;
        rollno=addminno;
        name=n;
    }
    void display()
    {
        cout<<"the name of student is : "<<  name <<endl<<"the roll no is : "<< rollno <<endl;
    }
};
int student::addminno=0;
int main()
{
    student s1("john");
    student s2("arjun");
    student s3("ganesh");
    s1.display();
   // s2.display();
    s3.display();
    cout<<"numbers of students get addmission \n"<<student::addminno<<endl;
}