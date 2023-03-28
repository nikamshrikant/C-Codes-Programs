#include <iostream>
using namespace std;
int main()
{
    int x=10,y=0,z;
    try
    {
        if(y==0)
        throw 10;//whatever integer value you can write here;
        return x/y;
        //z=x/y;
        //cout<<z<<endl;
    }
    catch(int e)
    {
        cout<<"division by zero "<<e<<endl;
    }
    cout<<"bye"<<endl;
    
}