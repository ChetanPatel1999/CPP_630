#include<iostream>
using namespace std;
int main()
{
  string name,city,mob,gmail;
  cout<<"enter name : ";
  getline(cin,name);
  cout<<"enter city : ";
  cin>>city;
  cout<<"enter mobile number : ";
  cin>>mob;
  cout<<"enter gmail : ";
  cin>>gmail;
  cout<<" student info : "<<endl;
  cout<<"name of student : "<<name<<endl;
  cout<<"city of student : "<<city<<endl;
  cout<<"mobile no  of student : "<<mob<<endl;
  cout<<"gmail of student : "<<gmail<<endl;
  return 0;
}