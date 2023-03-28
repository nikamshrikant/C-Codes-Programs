#include <iostream>
using namespace std;
struct demo
{
    int x;
    int y;
    int display()
    {
        cout<<x<<" "<<y<<endl;

    }
};
int main()
{
    demo d;
    d.x=13;
    d.y=90;
    cout<<d.display()<<endl;
    return 0;
} 