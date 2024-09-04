#include<iostream>
using namespace std;
class complex
{
    int real;
    int image;
    public:
    complex(){}
    complex(int a,int b)
    {
       real=a;
       image=b;
    }
    void display()//12+5i
    {
        cout<<"compelx number :"<<real<<"+"<<image<<"i"<<endl;
    }
    complex operator+(complex obj)
    {
       complex res;
       res.real=real + obj.real;
       res.image=image+obj.image;
       return res;
    }


};

int main()
{
    complex c1(12,5),c2(4,6),c3;
    c1.display();
    c2.display();
    c3=c1+c2;
    c3.display();
    return 0;
}