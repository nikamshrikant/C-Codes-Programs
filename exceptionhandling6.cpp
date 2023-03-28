#include <iostream>
using namespace std;
class myexception :public exception
{
};
int division(int a,int b)throw (myexception)
{
    if(b==0)
    throw myexception();//calling a constructor
    return a/b;
}
int main()
{
    int x=10,y=0,z;
    try
    {
        if(y==0)
        throw myexception();
        z=x/y;
        cout<<z<<endl;
    }
    catch(myexception e)
    {
        cout<<"division by zero "<<endl;
    }
    cout<<"bye"<<endl;
    return 0;
}
