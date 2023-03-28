#include <iostream>
using namespace std;
namespace first
{
void fun()
{
    cout<<"first"<<endl;
}
};
namespace second
{
    void fun()
    {
        cout<<"second"<<endl;
    }
};
using namespace first; //yo can also write (using namespace second;)
int main()
{
   // fun();
    second::fun();
    return 0;
}
//you can also write 
/* int main()
{
    first::fun();
    OR
    second::fun();
    return 0;
}*/