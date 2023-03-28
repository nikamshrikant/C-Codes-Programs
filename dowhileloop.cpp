#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int n;
    int i=1;
    int sum=0;
    cout<<"enter the number : \n";
    cin>>n;
    do
    {
        sum=sum+i;
        i++;
    }while(i<=n);
    cout<<"the sum is \n"<<sum<<endl;
    return 0;
}