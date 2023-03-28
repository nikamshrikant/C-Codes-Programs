#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int n;
    int sum=0;
    int i=1;
    cout<<"enter the number : \n";
    cin>>n;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}