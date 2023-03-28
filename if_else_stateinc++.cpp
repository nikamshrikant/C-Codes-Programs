#include <iostream>
using namespace std;
int main()
{
    int savings;

    cin>>savings;
    if(savings>6000)
    {
        cout<<"karche karvane vali sayli"<<endl;
        if(savings>10000)
        {
            cout<<"roadtrip pe chalte he fir sayli ke sath"<<endl;
        }
        else{
            cout<<"shopping hi karlenge yarr"<<endl;
        }
    }
    else if(savings>2000)
    {
        cout<<"budget girlfriend mansi"<<endl;
        if(savings<5000)
        {
            cout<<"dress leke dnege mansi ko "<<endl;
        }
        else{
            cout<<"ghumenge firenge ash karenge aur kya (mansi ke sath) "<<endl;
        }
    }
    else{
        cout<<"dost hi jaan bachayenge"<<endl;
    }
    return 0;
}