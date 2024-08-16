#include<iostream>
using namespace std;
class demo
{
    int num1;
    int num2;
    public:
    demo(int a,int b)
    {
      num1=a;
      num2=b;
    }
    void display() // getter method 
    {
        cout<<"value of num1 : "<<num1<<endl;
        cout<<"value of num2 : "<<num2<<endl;
        cout<<"__________________________________"<<endl;
    }    
    void setdata(int a,int b)// setter method 
    {
        num1=a;
        num2=b;
    } 
};
int main()
{
    demo d1(12,5),d2(15,18);
    d1.display();// 12 5
    d2.display();// 15 18
    d1.setdata(56,68);
    d1.display();// 56 68
    d2.display();// 15 18
    d1.setdata(5,6);
    d1.display();// 5 6
    d2.display();// 15 18

    return 0;
}
