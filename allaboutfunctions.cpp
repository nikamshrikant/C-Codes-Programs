#include <iostream>
using namespace std;
int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}
int main()
{
    int a;
    int b;
    cout<<"enter the two numbers:\n";
    cin>>a>>b;
    cout<<"the addition of your two numbers are\n"<<add(a,b)<<endl;
    return 0;
}