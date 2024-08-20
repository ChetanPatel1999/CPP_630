#include<iostream>
using namespace std;
class emp
{
    int id;
    float sallary;
    public:
    emp()//non parameterized constructor
    {
      id=222;
      sallary=5000;
    }
    emp(int a,float b=2000)// parameterized constructor with default value
    {
        id=a;
        sallary=b;
    }
    void display()
    {
        cout<<"emp info : "<<endl;
        cout<<"ID = "<<id<<endl;
        cout<<"Sallary = "<<sallary<<endl;
        cout<<"_______________________________"<<endl;
    }

};
int main()
{
    emp e1(111,12000.500),e2,e3,e4(333),e5(444);
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();
    return 0;
}