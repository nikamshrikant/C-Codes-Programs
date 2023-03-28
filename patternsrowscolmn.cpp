#include <iostream>
using namespace std;//for rectangle;
int main()
{
    int rows,coln;
    cin>>rows>>coln;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=coln;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}