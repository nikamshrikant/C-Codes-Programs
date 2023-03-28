#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream ifs;
    ifs.open("my.text");
    if(ifs)cout<<"fle is opened"<<endl;
    string name;
    int rollno;
    string branch;
    ifs>>name>>rollno>>branch;
    ifs.close();
    cout<<"name is \n"<<name<<endl;
    cout<<"roll no is\n"<<rollno<<endl;
    cout<<"branch is\n"<<branch<<endl;
    return 0;
}
