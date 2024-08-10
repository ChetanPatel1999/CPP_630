#include<iostream>
using namespace std;
class demo
{
    int a,b; // instance variable
    static int c,d;// class variabel
    public:
    void setadata(int r,int s,int t ,int u)
    {
        a=r;
        b=s;
        c=t;
        d=u;
    }
    void display()
    {
        cout<<a<<","<<b<<endl;
        cout<<c<<","<<d<<endl;
    }
    static void fun()
    {
        cout<<"hi i am static fuction"<<endl;
        cout<<c<<","<<d<<endl;
    }
};
int demo::c; // :: scop resolution operator
int demo::d;
int main()
{
    demo d1,d2,d3;
    d1.setadata(12,13,101,102);
    d2.setadata(14,15,103,104);
    d3.setadata(16,17,105,106);
    d1.display();
    d2.display();
    d3.display();
    demo::fun();
    return 0;
}