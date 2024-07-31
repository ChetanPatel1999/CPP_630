#include<iostream>
using namespace std;
int charcount(string s,char ch)
{
  int i,c=0;
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]==ch)
    {
      c++;  
    }
  }
  return c;
}
int main()
{
    string st;
    char k;
    cout<<"enter string : ";
    getline(cin,st);
    cout<<"enter char : ";
    cin>>k;
    int res=charcount(st,k);
    cout<<"char count = "<<res<<endl;
    return 0;
}