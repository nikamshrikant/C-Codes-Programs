#include <iostream>
using namespace std;
class Basiccar
{
    public:
  /* virtual*/ void start()
    {
       cout<<"basic car started"<<endl;
    }
};
class Advancedcar:public Basiccar{
    public:
    void start()
    {
        cout<<"advanced car started"<<endl;
    }
};
int main()
{
    Basiccar *b=new Advancedcar();
    b->start();
    return 0;
}