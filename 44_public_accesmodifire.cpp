#include<iostream>
using namespace std;
class demo
{
  public:
  int a;
  void fun()
  {
    cout<<"i am fun"<<endl;
  }
  void disply()
  {
    cout<<"a = "<<a<<endl;
  }
};
class demo2:public demo
{
 public:
 void fun2()
 {
    a=67;
    disply();
 }
} ;
int main()
{
 demo d1;
 d1.a=12;
 d1.disply();
 demo2 f;
 f.fun2();
  return 0;
}