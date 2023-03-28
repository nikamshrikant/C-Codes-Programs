#include <iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j<=x;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}