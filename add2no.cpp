#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Addition of your two number is : \n"<<a+b<<endl;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<a<<endl;
    cout<<b<<endl;
   
    return 0;
}
