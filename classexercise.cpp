#include <iostream>
using namespace std;
class student
{
    private:
    int roll;
    string Name;
    int mathMarks;
    int phyMarks;
    int chemMarks;
    public:
    student(int r,string n,int m,int p,int c )
    {
        roll=r;
        Name=n;
        mathMarks=m;
        phyMarks=p;
        chemMarks=c;
    }
    int total()
    {
        return mathMarks+phyMarks+chemMarks;
    }
    char grade()
    {
        float average=total()/3;
        if(average>60)
        {
            return 'A'; 
        }
        else if(average>=40 && average<-60 )
        {
            return 'B';
        }
        else
        return 'C';
    }

};
int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"enter the roll no. of student: \n";
    cin>>roll;
    cout<<"enter the name of student: \n";
    cin>>name;
    cout<<"enter the 3 subjects marks: \n";
    cin>>m>>p>>c;
    student s(roll,name,m,p,c);
    cout<<"total marks of student: \n"<<s.total()<<endl;
    cout<<"the Grade of the student: \n"<<s.grade()<<endl;
    return 0;
}