#include <iostream>
using namespace std;
class base
{
    public:
    void fun1()
    {
        cout<<"fun 1 of base"<<endl;
    }
};
class derived:public base
{
    public:
    void fun2()
    {
        cout<<"fun 2 of derived"<<endl;
    }
};
int main()
{
    derived d;
    base *ptr=&d;
    ptr->fun1();
  //  ptr->fun2();-- this function cannot be called because it is not present in base class
  //  d.fun1();
    //d.fun2();
    return 0;
}