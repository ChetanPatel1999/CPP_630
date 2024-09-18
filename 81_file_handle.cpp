#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  //create object of ofstream class
  ofstream write;
  // open a file using open member fuction of ofstream class
  write.open("someinfo.txt");
  write<<"hello bachho"<<endl;  
  write<<"kaiso ho"<<endl;  
  // close file using close fuction
  write.close();
  return 0;
}