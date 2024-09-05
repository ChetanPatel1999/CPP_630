#include<iostream>
using namespace std;
class base1
{
    public:
    void great()
    {
        cout<<"good morning "<<endl;
    }
};
class base2
{
    public:
    void great()
    {
        cout<<"good afternoon "<<endl;
    }
};
class child:public base1,public base2
{
 public:
 void great()
 {
    base1::great();
    base2::great();
 }
};
int main()
{
  child o;
  o.great();
  return 0;
}