#include <iostream>
using  namespace std;
int main()
{
    float a,b,c;
    cout<<"enter the two numbers\n";
    cin>>a>>b;
    char operation;
    cout<<"your options for the different opreations are :\n" "  1:+\n  2:-\n  3:*\n  4:/\n"<<endl;
    cout<<"enter your operation option \n";
    cin>>operation;
    switch(operation)
    {
        case '1':c=a+b;
        cout<<"addtion is\n"<<c<<endl;
        break;
        case '2':c=a-b;
        cout<<"substraction is\n"<<c<<endl;
        break;
        case '3':c=a*b;
        cout<<"multiplication is\n"<<c<<endl;
        break;
        case '4':c=a/b;
        cout<<"division is \n"<<c<<endl;
        break;
        default:
        cout<<"invalid data  or option you have entered \n"<<endl;
        break;
    }
    return 0;
}