#include<iostream>
using namespace std;
class base1
{
    public:
    base1()
    {
        cout<<"base1 constructor is called"<<endl;
    }
    base1(int a , int b)
    {
        cout<<"base1 2 args constructor is called"<<endl;
    }
};
class base2
{
    public:
    base2()
    {
        cout<<"base2 constructor is called"<<endl;
    }
    base2(int a)
    {
        cout<<"base2 1 arg constructor is called"<<endl;

    }
};
class child:public base1, public base2
{
public:
child(int a,int b):base2(a),base1(12,56)
{
    cout<<"child 2 arg class constructor is called"<<endl;
}
};
int main()
{
  child c(12,34);
  return 0;
}