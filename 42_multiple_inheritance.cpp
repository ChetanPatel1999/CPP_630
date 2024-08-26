// multiple inheritance
#include<iostream>
using namespace std;
class addition
{
 public:
 void addint(int a,int b)
 {
   cout<<" sum = "<<(a+b)<<endl;
 }
 void addfloat(float a,float b)
 {
   cout<<" sum = "<<(a+b)<<endl;
 }
};
class subtarction
{
    public:
  void subint(int a,int b)
 {
   cout<<" sub = "<<(a-b)<<endl;
 }
 void subfloat(float a,float b)
 {
   cout<<" sub = "<<(a-b)<<endl;
 }
};
class multiplication
{
    public:
 void mulint(int a,int b)
 {
   cout<<" mul = "<<(a*b)<<endl;
 }
 void mulfloat(float a,float b)
 {
   cout<<" mul = "<<(a*b)<<endl;
 }
};
class calculater:public addition ,public subtarction,public multiplication
{

};
int main()
{
  calculater c;
  c.addint(12,5);
  c.subint(12,5);
  c.mulint(12,5);
    return 0;
}