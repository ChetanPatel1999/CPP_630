// constructore in inheritance
#include <iostream>
using namespace std;
class base
{
public:
  base()
  {
    cout << "base 0 arg constructor is called" << endl;
  }
  base(int a)
  {
    cout << "base 1 arg constructor is called" << endl;
  }
  base(int a, int b)
  {
    cout << "base 2 arg constructor is called" << endl;
  }
};
class derived : public base
{
public:
  derived()
  {
    cout << "derived 0 arg constructor called " << endl;
  }
   derived(int a):base(a,89)
  {
    cout << "derived 1 arg constructor called " << endl;
  }
   derived(int a,int b):base(12)
  {
    cout << "derived 2 arg constructor called " << endl;
  }
   derived(int a,int b,int c):base(a,c)
  {
    cout << "derived 3 arg constructor called " << endl;
  }
};
int main()
{
  derived ob(45);
  return 0;
}