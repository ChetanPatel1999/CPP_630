#include<iostream>
using namespace std;
float fun(float num)
{
 return num+5;
}
string fun2(string s)
{
    string s2="hi";
    string h=s2+" "+s;
    return h;
}
char fun3(char a)
{
    return a+1;
}
int factorial(int num)
{
    int fact=1,i;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
   cout<<fun(12.6)<<endl;
   float a;
   a=fun(8.3);
   cout<<a<<endl;
   cout<<fun2("chetan")<<endl;
   cout<<fun3('A')<<endl;
   cout<<fun3('y')<<endl;

   cout<<factorial(3)<<endl;


    return 0;
}