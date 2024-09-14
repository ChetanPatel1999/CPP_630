#include<iostream>
using namespace std;
template<class T>
class complex
{
    T real;
    T image;
    public:
    complex(){}
    complex(T a,T b)
    {
       real=a;
       image=b;
    }
    void display()//12+5i
    {
        cout<<"compelx number :"<<real<<"+"<<image<<"i"<<endl;
    }
    complex sum(complex obj)
    {
       complex res;
       res.real=real + obj.real;
       res.image=image+obj.image;
       return res;
    }
};
int main()
{
    complex <int> c1(12,5),c2(4,6),c3;
    c1.display();
    c2.display();
    c3=c1.sum(c2);
    c3.display();
    complex<float> c4(12.78,5.34),c5(4.3,6.9),c6;
    c4.display();
    c5.display();
    c6=c4.sum(c5);
    c6.display();

    return 0;
}