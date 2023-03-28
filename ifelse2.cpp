#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    if(marks>70)
    {
        cout<<"grade A"<<endl;
    }
    else if(marks>30)
    {
        cout<<"grade B"<<endl;
    }
    else{
        cout<<"grade F"<<endl;
    }
    return 0;
}