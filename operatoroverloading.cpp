#include <iostream>
using namespace std;
class complex
{
    private:
    int real;
    int img;
    public:
    complex(int r,int i)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }
    complex add(complex c)           /*complex operator+(complex c)
                                      {
                                         complex temp;
                                         temp.real=real+c.real;
                                        temp.img=img+c.img;
                                           return temp;

                                      }*/   
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};
int main()
{
    complex c1(3,9),c2(17,10),c3;                   /* complex c1,c2,c3; 
                                          c1.real=3;c1.img=9;                
                                           c2.real=17;c2.img=10;
                                           c3=c1+c3;

                                           cout<<c.real<<"+i"<<c.img<<endl;
                                            return 0;*/
    c3=c1.add(c2);
    cout<<c.real<<"+i"<<c.img<<endl;
}