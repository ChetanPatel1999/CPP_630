//single inheritance
#include<iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    public:
    emp(int a,float b)
    {
        id=a;
        sal=b;
    }
    void empdisp()
    {
        cout<<"ID of emp : "<<id<<endl;
        cout<<"sallary of emp : "<<sal<<endl;
    }
};
class programmer:public emp
{
  string lang;
  string proj;
  public:
  programmer(int a, float b ,string s1, string s2):emp(a,b)
  {
    lang=s1;
    proj=s2;
  }
  void pdisp()
  {
    empdisp();
    cout<<"programming languge : "<<lang<<endl;
    cout<<"project name  : "<<proj<<endl;
  }
};
int main()
{
    programmer p1(1001,12500,"java","e-commers");
    p1.pdisp();

    return 0;
}