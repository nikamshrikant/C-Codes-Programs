#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter the number : \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"the sum is \n"<<sum<<endl;
    return 0;
}