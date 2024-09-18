#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream read("info.txt");
  string s;
  while(read.eof()==0)
  {
    getline(read,s);
    cout<<s<<endl;
  }
  read.close();
  return 0;
}