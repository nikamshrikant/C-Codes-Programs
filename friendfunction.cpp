#include <iostream>
using namespace std;
class test
{
    private:int a;
    protected:int b;
    public:int c;
    friend int main();

};
int main()
{
    test t;
    t.a=10;
    t.b=15;
    t.c=5;
    return 0;
}