#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw string("hi");

    }
    catch(int e)
    {
        cout<<"int catch"<<endl;
    }
    catch(float e)
    {
        cout<<"float catch"<<endl;
    }
    catch(char e)
    {
        cout<<"char catch"<<endl;
    }
    catch(...)
    {
        cout<<"All catch"<<endl;
    }
    return 0;
}