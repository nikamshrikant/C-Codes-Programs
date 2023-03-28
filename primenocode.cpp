#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag;
   for(int i=2;i<=sqrt(n);i++)
   {
    if(i%n==0)
    {
        cout<<"non- prime no"<<endl;
        flag=1;
        break;
    }
   }
   if(flag==0)
   {
    cout<<"it is prime no"<<endl;
   }
    return 0;

}