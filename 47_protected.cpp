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
class child:protected parant{
    public:
    int d;
 public:
 void fun()
 {
    c=78;
    a=67;
 }
};
class child2:public child{
public:
void hi()
{
 a=12;
 c=89;
}
};
int main()
{
  child o;
  return 0;
}