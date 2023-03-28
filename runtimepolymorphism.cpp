#include <iostream>
using namespace std;
class car
{
  public:
  /*virtual*/ virtual void start() 
  {
    cout<<"car is started"<<endl;
  }
 /* virtual*/ virtual void stop()
  {
   cout<<"car is stopped"<<endl;
  }
};
class innova:public car
{
    public:
    void start()
    {
     cout<<"innova started"<<endl;
    }
    void stop()
    {
        cout<<"innova is stopped"<<endl;
    }
};
class swift:public car
{
    public:
    void start()
    {
        cout<<"swift is started"<<endl;
    }
    void stop()
    {
        cout<<"swift is stopped"<<endl;
    }
};
int main()
{
    car *c=new innova();
    c->start();
    c->stop();
    c=new swift();
    c->start();
    c->stop();
    return 0;
}