#include<iostream>
using namespace std;
int main()
{
   int x=-9;
   cout<<"before try block"<<endl;
   try
   {
     if(x<0)
     {
        throw x;
     }
     cout<<"value of x : "<<x<<endl;//12
     cout<<"after throw keyword"<<endl;
   }
   catch(int a)
   {
    cout<<"you entered nagative value : "<<a<<endl;
    cout<<"catch block exicute"<<endl;
   }
   cout<<"after catch block"<<endl;
   cout<<"second line after catch block";
    return 0;
}