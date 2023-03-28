#include <iostream>
using namespace std;
class parent
{
    private: int a;
    protected:int b;
    public:int c;
    void funparent()
    {
        a=15;
        b=10;
        c=5;
    }
};
class child : public parent
{
    void funchild()
    {
       // a=15;
        b=10;
        c=5;
    }
};
class grandchild:public child
{
    void fungrandchild()
    {
       // a=10;
        b=15;
        c=5;
    }
};
int main()
{
    child c;
}