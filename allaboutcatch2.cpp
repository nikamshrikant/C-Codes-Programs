#include <iostream>
using namespace std;
class myexception1:exception
{
};
class myexception2:public myexception1
{
};
int main()
{
    try
    {
        throw myexception2();
    }
    catch(myexception2 e)
    {
        cout<<"myexception2 catch"<<endl;
    }
    catch(myexception1 e)
    {
        cout<<"myexception1 catch"<<endl;
    }
    catch(...)
    {
        cout<<"all catch"<<endl;
    }
    return 0;
}