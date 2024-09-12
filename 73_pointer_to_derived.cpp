#include <iostream>
using namespace std;
class base
{
public:
    int a = 12;
    int b = 9;

public:
    virtual void display()
    {
        cout << "base class display" << endl;
        cout << "a =" << a << endl;
        cout << "b =" << b << endl;
    }
};
class derived : public base
{
public:
    int c = 89;

public:
    void display()
    {
        cout << "derived class dis0play" << endl;
        cout << "a =" << a << endl;
        cout << "b=" << b << endl;
        cout << "c =" << c << endl;
    }   
   
};
int main()
{
    base *dptr = NULL;
    dptr = new base;
    dptr->display();
    dptr = new derived;
    dptr->display();
    return 0;
}