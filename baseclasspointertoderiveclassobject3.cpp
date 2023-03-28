#include <iostream>
using namespace std;
class basiccar
{
   public:
   void start()
   {
    cout<<"car started"<<endl;
   }
};
class advancedcar:public basiccar
{
    public:
    void playmusic()
    {
        cout<<"playing musing in the car"<<endl;
    }
};
int main()
{
    advancedcar a;
    basiccar *ptr=&a;
    ptr->start();
    //ptr->playmusic();---this function is not available in basiccar class
    //a.start();
    //a.playmusic();
    return 0;
}