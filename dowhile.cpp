#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int i,n;
    int sum=0;
    cout<<"enter the number : \n";
    cin>>n;
    do{
        sum=sum+n;
        n--;
    }while(n>0);
    cout<<sum<<endl;
    return 0;
}