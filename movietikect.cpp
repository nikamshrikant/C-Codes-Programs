 #include <iostream>
 using namespace std;
 int main()
 {
 int choice;
  cout<<"Welcome to Our PVR sir / Madam Please enter your choice\n";
  cout<<" 1.Hollywood: Thor Love & Thunder\n 2.Bollywood: Laal Singh Chaadda\n 3.Tollywood: Vikram\n 4.Korean: Everything is at Everywhere\n ";
  cin>>choice;
  switch(choice)
  {
      case 1: cout<<"Hollywood: Thor Love & Thunder"<<endl;
      cout<<"Movie Timming is 7:00-10:00pm"<<endl;
      cout<<"Your Ticket Prize is 475rs"<<endl;
      break;
      case 2: cout<<"Bollywood: Laal Singh Chaadda"<<endl;
      cout<<"Movie Timming is 10:00am-12:30pm"<<endl;
      cout<<"Your Ticket Prize is 400rs"<<endl;
      break;
      case 3: cout<<"Tollywood: Vikram"<<endl;
      cout<<"Movie Timming is 3:00-6:00pm"<<endl;
      cout<<"Your Ticket Prize is 350rs"<<endl;
      break;
      case 4: cout<<"Korean: Everything is at Everywhere"<<endl;
      cout<<"Movie Timming is 8:00am-11:00am"<<endl;
      cout<<"Your Ticket Prize is 300rs"<<endl;
      break;
      default:cout<<"Invalid choice"<<endl;
      break;
  }
  cout<<"Enjoy Your Movie Sir / Madam"<<endl;
 return 0;
 } 