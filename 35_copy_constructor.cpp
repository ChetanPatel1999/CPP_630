// copy constrctor example
// if not make any copy constructor so compiler make default copy constructor.
#include<iostream>
using namespace std;
class number
{
    int num1;
    int num2;
    public:
    number(){}
    number(int a,int b)
    {
        cout<<"simple two arg constructor is called"<<endl;
        num1=a;
        num2=b;
    }
    number(number &obj)
    {
        cout<<"copy constructor is called"<<endl;
        num1=obj.num1+5;
        num2=obj.num2+5;
    }
    void display()
    {
        cout<<"num1 = "<<num1<<endl;
        cout<<"num2 = "<<num2<<endl;
        cout<<"__________________________"<<endl;
    }
};
int main()
{
    number n1(12,13),n2(n1),n6;
    number n3=n1;// our copy constructor is called
    n6=n1;//dafult copy constructor is called
    n1.display();
    n2.display();
    n3.display();
    n6.display();
    return 0;
}