#include <iostream>
using namespace std;
class shape
{
    public :
    virtual float area()=0;
    virtual float perimeter()=0;
};
class Rectangle:public shape
{
    private:
    float length;
    float breadth;
    public:
    Rectangle(int l=1,int b=1){length=l,breadth=b;}
    float area(){return length*breadth;}
    float perimeter(){return 2*(length+breadth);}
};
class Circle:public shape
{
    private:
    float radius;
    public:
    Circle(float r){radius=r;}
    float area(){return 3.1425*radius*radius;}
    float perimeter(){return 2*3.1452*radius;}

};
int main()
{
    shape *s=new Rectangle(10,15);
    cout<<"the area of rectangle is\n"<<s->area()<<endl;
    cout<<"the perimeter of rectangle is \n"<<s->perimeter()<<endl;
    s=new Circle(16);
    cout<<"the area of circle is\n"<<s->area()<<endl;
    cout<<"the perimeter of circle is\n"<<s->perimeter()<<endl;
    return 0;
}