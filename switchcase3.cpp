#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    char alphabet;
    cout<<"enter your alphabet : \n";
    cin>>alphabet;
    switch(alphabet)
    {
        case 'a': cout<<"vowel"<<endl;
        break;
        case 'e': cout<<"vowel"<<endl;
        break;
        case 'i': cout<<"vowel"<<endl;
        break;
        case 'o': cout<<"vowel"<<endl;
        break;
        case 'u': cout<<"vowel"<<endl;
        break;
        default : cout<<"it is a consonant"<<endl;
    }
    return 0;

}