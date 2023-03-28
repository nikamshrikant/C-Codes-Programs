#include <iostream>
#include <fstream>
using namespace std;//for retriveing the data from the file;
class student
{
    public:
    string name;
    int rollno;
    string branch;
   friend ofstream & operator<<(ofstream &ofs,student &s);
   friend ifstream & operator>>(ifstream &ifs,student &s); 

};
ofstream & operator<<(ofstream &ofs,student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.rollno<<endl;
    ofs<<s.branch<<endl;
}
ifstream & operator>>(ifstream &ifs,student &s)
{
    ifs>>s.name>>s.rollno>>s.branch;
    return ifs;
}
int main()
{
    student s1;
    s1.name="john";
    s1.rollno=10;
    s1.branch="cs";
    ofstream ofs("student.txt");
    ofs<<s1<<endl;
    ifstream ifs("student.txt");
    ifs>>s1;
    cout<<"name is \n"<<s1.name<<endl;
    cout<<"roll no is \n"<<s1.rollno<<endl;
    cout<<"branch is \n"<<s1.branch<<endl;
    ifs.close();
    return  0;
}