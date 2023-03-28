#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter your number : \n";
    cin>>num;
    if ((num%3==0) || (num%5==0))
    {
        cout<<num<<" "<<"the number is divible by 3 and 5"<<endl;
    }
    return 0;
}