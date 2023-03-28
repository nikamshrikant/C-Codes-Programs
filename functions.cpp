#include <iostream>
using namespace std;
int & fun(int & a)
{
    cout<<a;
    return a;
}
int main()
{
    int x=10;
    int y;
    y=fun(x)=25;
    cout<<y;
    return 0;
}