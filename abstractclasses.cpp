#include <iostream>
using namespace std;
class car
{
    public:
    virtual void start()=0; // <--pure virtual function
    /*{
        cout<<"car started"<<endl;
    }*/
    virtual void stop()=0;// <--pure virtual function
    /*{
        cout<<"car stopped"<<endl;
    }*/
};
class Swift:public car{
    public:
    void start()
    {
        cout<<"swift start"<<endl;
    }
    void stop()
    {
        cout<<"swift stopped"<<endl;
    }
};
class Innova:public car
{
    public :
    void start()
    {
        cout<<"innova started"<<endl;
    }
    void stop()
    {
        cout<<"innova stopped"<<endl;
    }
};
int main()
{
    //car c;--i can creat object when the body of a 
             //fuction is defined in car class without using virtual key /virtual  function
            // i cannot creat object of car class because 
            // use of virtual key/virtual function 
    car *c=new Swift();
    c->start();
    c->stop();
    c=new Innova();
    c->start();
    c->stop();
    return 0;
}