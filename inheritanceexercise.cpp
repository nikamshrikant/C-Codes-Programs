#include <iostream>
using namespace std;
class Employee
{
    private :
    int eid;
    string name;
    public:
    Employee(int e,string n)
    {
      eid=e;
      name=n;
    }
    int getEmployeeID(){return eid;}
    string getName(){return name;}

};
class FulltimeEmployee:public Employee
{
    private:
    int salary;
    public:
    FulltimeEmployee(int e,string n,int sal):Employee (e,n)//calling parameterised constructor of employee
    {
        salary=sal;
    }
    int getSalary(){return salary;}
};
class ParttimeEmployee:public Employee
{
    private:
    int wage;
    public:
    ParttimeEmployee(int e,string n,int w):Employee(e,n)//parameterised constructor of employee class
    {
        wage=w;
    }
    int getWage(){return wage;}
};
int main()
{
    ParttimeEmployee p1(1,"shrikant" ,3000);
    FulltimeEmployee p2(2,"Arjun" ,50000);
    cout<<"salary of  "<<p2.getName()<<" is "<<p2.getSalary()<<endl;
    cout<<"Daily Wage of  "<<p1.getName()<<" is "<<p1.getWage()<<endl;
    return 0;
}