#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age : \n";
    cin>>age;
    if(age<12)
    {
        cout<<"age is equal to child"<<endl;
    }
    else if(age>12 && age<18)
    {
        cout<<"age is equal to teenager"<<endl;
    }
    else if(age>18 && age<25)
    {
        cout<<"age is eqaul to adult"<<endl;
    }
    else if(age>25 && age<50)
    {
        cout<<"age is equal to mature man"<<endl;
    }
    else
    {
        cout<<"age is equal to aged person"<<endl;
    }
    return 0;
}