#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter your number : \n";
    cin>>num;
    if((num%2==0) && (num%3==0))
    {
        cout<<num<<endl;
    }
   
    return 0;
}
