#include <iostream>
using namespace std;
class base
{
    public:
   /* base()
    {
        cout<<"base constructor"<<endl;
    }*/
  virtual~base()
    {
        cout<<"base destructor "<<endl;
    }
};
class derived:public base
{
    public:
    /*derived()
    {
        cout<<"derived constructor"<<endl;
    }*/
    ~derived()
    {
        cout<<"derived destructor"<<endl;
    }
};
void fun()
{
    base*ptr=new derived();
    delete ptr;
}
int main()
{
    fun();
    return 0;
}
