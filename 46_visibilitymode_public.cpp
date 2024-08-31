#include<iostream>
using namespace std;
class parant
{
  public :
  int a;
  private:
  int b;
  protected:
  int c;
};
class child:public parant{
 public:
 void fun()
 {
    c=78;
 }
};
int main()
{
  child o;
  o.a=12;
  cout<<o.a<<endl;
  return 0;
}