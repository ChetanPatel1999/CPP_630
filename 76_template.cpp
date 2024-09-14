// template with multiple parameter
#include<iostream>
using namespace std;
template<class T1, class T2>
class data
{
    T1 num1;
    T2 num2;
    public:
    void setdata(T1 a,T2 b)
    {
        num1=a;
        num2=b;
    }
    void display()
    {
        cout<<"num1 = "<<num1<<endl;
        cout<<"num2 = "<<num2<<endl;
    }
};
int main()
{
    data<int,int> d;
    d.setdata(12,45);
    d.display();
     data<float,float> d1;
    d1.setdata(12.89,45.45);
    d1.display();
    data<int,string> d2;
    d2.setdata(45,"hi bro");
    d2.display();
    return 0;
}