#include <iostream>
using namespace std;
class demo
{
    public:
    int x=10;
    int y=20;
    void display()const//so the constant function cannot modify the datamembers of a class
    {
        //x++;
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    demo d;
    d.display();
}