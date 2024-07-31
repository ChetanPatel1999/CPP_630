#include<iostream>
using namespace std;
void fun(int f)
{
    cout<<"value of f = "<<f<<endl;
}
void fun2(char ch)
{
    cout<<"value of ch : "<<ch<<endl;
}
void fun3(string s,float f)
{
    cout<<"vale of s = "<<s<<endl;
    cout<<"vale of f = "<<f<<endl;;
}
int main()
{
    int a=12;
    fun(a);
    fun2('U');
    fun2('o');
    fun3("string",56.78);
    return 0;
}