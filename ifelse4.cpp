#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int marks;
    cout<<"enter the marks : \n";
    cin>>marks;
    if(marks>33)
    {
        if(marks>33 && marks<60)
        {
            cout<<"passed"<<endl;
        }
        else{
            cout<<"gracefully passed !"<<endl;
        }

    }
    else
    {
        cout<<"fail"<<endl;
    }
    return 0;
}