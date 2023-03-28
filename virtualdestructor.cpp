#include <iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base constructor"<<endl;
    }
    ~base()
    {
        cout<<"base destructor"<<endl;
    }
};
class derived:public base
{
   public:
   derived()
   {
    cout<<"derived constructor"<<endl;
   }
   ~derived()
   {
    cout<<"derived destructor"<<endl;
   }
};
void fun()
{
    derived d;//creating object of derived class;
}
int main()
{
    fun();//void fun()called;
}