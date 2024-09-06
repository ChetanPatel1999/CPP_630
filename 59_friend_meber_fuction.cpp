// memebr friend fuction
#include <iostream>
using namespace std;
class data;
class demo
{
public:
    void display1(data d);
    void display2(data d);
};
class data
{
    int a;
    int b;

public:
    friend void demo::display1(data);
    friend void demo::display2(data);
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
};
void demo::display1(data d)
{
    cout << d.a << endl;
}
void demo::display2(data d)
{
    cout << d.b << endl;
}
int main()
{
    data d;
    d.setdata(12, 34);
    demo de;
    de.display1(d);
    de.display2(d);
    return 0;
}