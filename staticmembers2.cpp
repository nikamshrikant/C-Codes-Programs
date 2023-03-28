#include <iostream>
using namespace std;
class innova
{
    public:
    static int price;
    innova()
    {
    }
    static int getprice()
        {
            return price;
        }
};
int innova::price=20;
int main()
{
    cout<<innova::price<<endl;
    innova my;
    cout<<my.getprice()<<endl;
    return 0;
}