#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
   char alphabet;
   cout<<"enter your alphabet : \n";
   cin>>alphabet;
   if((alphabet=='a') || (alphabet=='e') || (alphabet=='i') || (alphabet=='o') || (alphabet=='u'))
   {
    cout<<"it is a vowel"<<endl;
   }
   else{
    cout<<"it is consonant"<<endl;
   } 
   return 0;
}