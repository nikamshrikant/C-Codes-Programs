#include <iostream>
using namespace std;
class rectangle
{
    public:
    void area()
    {
        cout<<"area of rectangle"<<endl;
    }
};
class cuboid : public rectangle
{
    public:
    void volume()
    {
        cout<<"volume of cuboid"<<endl;
    }
};
int main()
{
   // rectangle r;
    //cuboid *q=&r;-----this method is not correct 
    //q->area();
    //q->volume();
    cuboid c;
    rectangle *ptr=&c;
    ptr->area();
   // ptr->volume();--because this function is not present in rectangle class
   // c.area();
    //c.volume();
    return 0;
}