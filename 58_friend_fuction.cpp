#include<iostream>
using namespace std;
class data
{
    int a;
    int b;
    public:
    friend void display1(data);
    friend void display2(data);
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }   
};
void display1(data d)
{
    cout<<d.a<<endl;
}
void display2(data d)
{
    cout<<d.b<<endl;
}
int main()
{
    data d;
    d.setdata(12,34);
    display1(d);
    display2(d);
    return 0;
}