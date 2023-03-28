#include <iostream>
using namespace std;
int main()
{
    int x=10;
    int *const ptr=&x;
    ++*ptr;//i can change the value of x; but i can't move the pointer to variable y;
    int y=20;
    //ptr=&y;
    cout<<*ptr<<" "<<x<<endl;
    return 0;
}