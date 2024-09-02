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
class child:private parant{
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
 a=12;//because private cant inherit
 c=89;//because private cant inherit
}
};
int main()
{
  child o;
  return 0;
}