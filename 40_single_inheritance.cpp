//single inheritance
#include<iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    public:
    void setemp(int a,float b)
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
  void pset(string s1, string s2)
  {
    lang=s1;
    proj=s2;
  }
  void pdisp()
  {
    cout<<"programming languge : "<<lang<<endl;
    cout<<"project name  : "<<proj<<endl;
  }
};
int main()
{
    emp e1,e2,e3;
    e1.setemp(1001,12000.500);
    e1.empdisp();
    programmer p1,p2,p3;
    p1.setemp(10234,50000.567);
    p1.pset("java","E-commorse");
    p1.empdisp();
    p1.pdisp();

    return 0;
}