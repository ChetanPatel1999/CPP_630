//inheritance example
#include<iostream>
using namespace std;
class A
{
    public:
    void m1()
    {
       cout<<"class A m1 is called"<<endl;
    }
     void m2()
    {
       cout<<"class A m2 is called"<<endl;
    }
};
class B:public A
{
    public:
      void m3()
    {
       cout<<"class B m3 is called"<<endl;
    }
     void m4()
    {
       cout<<"class B m4 is called"<<endl;
    }
};
int main()
{
    A obj;
    obj.m1();
    obj.m2();
    B ob1;
    ob1.m1();
    ob1.m2();
    ob1.m3();
    ob1.m4();
    
    return 0;
}