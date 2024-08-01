//defaultf arguments 
#include<iostream>
using namespace std;
void add(int a,int b=8)//default value set of b =8
{
    cout<<"sum = "<<(a+b)<<endl;
}
void billcalculate(int q=1,int p=1000)
{
    cout<<"total bill = "<<(q*p)<<endl;
}
int main()
{
    add(12,3);
    add(5);
    billcalculate(5,400);
     billcalculate(7,200);
     billcalculate(8);
     billcalculate();
    return 0;
}