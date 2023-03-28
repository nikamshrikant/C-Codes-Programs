#include <iostream>
using namespace std;
class test
{
    public:
    int a=10;
    static int count;
    test()
    {
      a=10;
      count++;
    }
    static int getcount()
    {
        return count;
    }
};
int test::count=0;
int main()
{
    test t1,t2;
    cout<<test::count<<endl;
    cout<<t1.getcount()<<endl;
}