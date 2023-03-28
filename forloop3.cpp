#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int i=1;
    for(int i=1;i<=50;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;

}