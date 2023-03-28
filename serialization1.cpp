#include <iostream>
#include <fstream>
using namespace std;
class student
{
    public:
    string name;
    int rollno;
    string branch;
    friend ofstream & operator<<(ofstream &ofs,student &s);
};
ofstream & operator<<(ofstream &ofs ,student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.rollno<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}
int main()
{
    student s1;
    s1.name="john";
    s1.rollno=10;
    s1.branch="cs";
    ofstream ofs("student.text",ios::trunc);
    ofs<<s1.name<<endl;
    ofs<<s1.rollno<<endl;
    ofs<<s1.branch<<endl;
    ofs<<s1<<endl;
    ofs.close();
    return 0;
}