#include <iostream>
using namespace std;
class base
{
    public:
    void display()
    {
        cout<<"display of base"<<endl;
    }
};
class derived:public base
{
    public:
    void display(int x)
    {
        cout<<"display of derived \n"<<x<<endl;
    }
};
int main()
{
    derived d;
    d.display(20);//you have to give some parameters to the function called from derived class
    return 0;
}