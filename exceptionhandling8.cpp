#include <iostream>
using namespace std;
class myexception:public exception
{
};
int division(int a,int b)throw (int)//you can also write throw()--empty throw with ();this  doesn't throw the whole process
{
    if(b==0)
    throw 10;
    return a/b;
}
int main()
{
    int x=10,y=0,z;
    try
    {
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(int e)
    {
        cout<<"division by zero "<<endl;
    }
    cout<<"bye "<<endl;
    return 0;
}
