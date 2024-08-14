#include<iostream>
using namespace std;
void add()
{
   cout<<"addition program"<<endl;
}
void add(int a)
{
   cout<<"sum = "<<(a+5)<<endl;
}
void add(int a,int b)
{
    cout<<"call int int "<<endl;
    cout<<"sum = "<<(a+b)<<endl;
}
void add(char a)
{
   cout<<"char = "<<a<<endl;
}
void add(float a,float b)
{
    cout<<"call float float "<<endl;
    cout<<"sum = "<<(a+b)<<endl;
}
void add(double a,double b)
{
    cout<<"call double double "<<endl;
    cout<<"sum = "<<(a+b)<<endl;
}
void add(int a,float b)
{
    cout<<"call int float "<<endl;
    cout<<"sum = "<<(a+b)<<endl;
}
void add(float a,int b)
{
    cout<<"call float int "<<endl;
    cout<<"sum = "<<(a+b)<<endl;
}
int main()
{
    add(12,7.9f);
    return 0;
}