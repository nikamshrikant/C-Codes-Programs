#include <iostream>
using namespace std;
class complex
{
    public:
    int real;
    int img;
    public:
    complex (int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }
    friend complex operator+(complex c1,complex c2)
    {
    }
};
complex operator+(complex c1,complex c2)
{
    complex t;
    t.real=real+c1.real+c2.real;
    t.img=img+c1.img+c2.img;
    return t;
}
int main()
{
    complex c1(5,3),c2(10,5),c3;
    c3=c1+c2;
    c3.display();
}
