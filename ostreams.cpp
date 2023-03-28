#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream ofs ("my.text" ,ios::trunc);
    ofs<<"arjun"<<endl;
    ofs<<"roll no is : 1"<<endl;
    ofs<<"branch is : cs "<<endl;
    ofs. close();
}