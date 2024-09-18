#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  //create object of ofstream class and using constructor open a file
  ofstream write("info.txt");
  string s="this is string variable data";
  write<<"hello bachho"<<endl;  
  write<<"kaiso ho"<<endl;  
  write<<s;
  // close file using close fuction
  write.close();
  return 0;
}