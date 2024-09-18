#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream read;
  string s;
  read.open("info.txt");
  //read>>s;
  getline(read,s);
  cout<<s;
  read.close();
  return 0;
}