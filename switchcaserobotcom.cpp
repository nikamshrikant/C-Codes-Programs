#include <iostream>
using namespace std;
int main()
{
    char button;
    cout<<"enter the button\n";
    cin>>button;
    switch(button)
    {
        case 'a':cout<<"hello"<<endl;
        break;
        case 'b':cout<<"namaste"<<endl;
        break;
        case 'c':cout<<"yeah"<<endl;
        break;
        case 'd':cout<<"yo bro"<<endl;
        break;
        case 'e':cout<<"ciao"<<endl;
        break;
        default:
        cout<<"fuck you : iam still learning new things"<<endl;
        break;
    }
    return 0;
}