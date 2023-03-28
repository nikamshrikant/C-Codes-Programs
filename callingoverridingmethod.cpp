#include <iostream>
using namespace std;
class base
{
    public:
    void fun()
    {
        cout<<"function of base"<<endl;
    }
};
class derived:public base
{
    public:
    void fun()
    {
        cout<<"function of derived"<<endl;
    }
};
int main()
{
    derived d;
    d.fun();
    return 0;
} //output - will be " function of derived "will be executed