#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle();
    rectangle(int l,int b);
    rectangle(rectangle &r);
    int getLength(){return length;} //inline function; 
    int getBreadth(){return breadth;}// inline funtion;
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~rectangle();
};
int main()
{
    rectangle r(10,12);
    cout<<"Area\n"<<r.area()<<endl;
    cout<<"perimeter\n"<<r.perimeter()<<endl;
    if(r.isSquare())
    {
        cout<<"Yes\n"<<endl;
    }
    else
    cout<<"Not a Square"<<endl;
    return 0;


}
rectangle::rectangle()
{
    length=1;
    breadth=1;
}
rectangle::rectangle(int l,int b)
{
    length=l;
    breadth=b;

}

rectangle::rectangle(rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void rectangle::setLength(int l)
{
    length=l;

}
void rectangle::setBreadth(int b)
{
    breadth=b;
}
/*int rectangle::getLength()
{
    return length;                  //when they are define in upper class block 
                                      then it is not neccessery to write the 
                                      getfunction outside the class 
                                      but for complete code you can write the 
                                      complete code for the understanding;
 }
int rectangle::getBreadth()
{
    return breadth;
}*/
int rectangle::area()
{
    return length*breadth;
}
int rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool rectangle::isSquare()
{
    return length==breadth;
}
rectangle::~rectangle()
{
    cout<<"rectangle is destroyed"<<endl;
}


