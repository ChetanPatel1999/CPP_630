#include<iostream>
using namespace std;
class data
{
    int a;
    int b;
    public:
    friend void fun();
};
void fun()
{
    data d;
    d.a=12;
    cout<<d.a<<endl;
}
int main()
{
    fun();
    return 0;
}