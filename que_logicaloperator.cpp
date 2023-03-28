#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0 && n%3==0)
    {
        cout<<"numberis divisible by 2 and 3\n"<<endl;
    }
    else if(n%2==0)
    {
        cout<<"number is divisible by 2 \n"<<endl;
    }
    else if(n%3==0){
        cout<<"number is divisible by 3\n"<<endl;
    }
    else{
        cout<<"number is not divisible by 2 and 3 and also not divisible by  one of them\n"<<endl;
    }
    return 0;
}