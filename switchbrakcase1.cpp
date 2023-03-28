#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int daynumber;
    cout<<"enter the daynumber : \n";
    cin>>daynumber;
    switch(daynumber)
    {
        case 1: cout<<"Monday"<<endl;
        break;
        case 2: cout<<"Tuesday"<<endl;
        break;
        case 3: cout<<"Wednesday"<<endl;
        break;
        case 4: cout<<"Thursday"<<endl;
        break;
        case 5: cout<<"Friday"<<endl;
        break;
        case 6: cout<<"Saturday"<<endl;
        break;
        case 7: cout<<"Sunday"<<endl;
        break;
        default : cout<<"invalid number"<<endl;
        break;
    }
    return 0;
}