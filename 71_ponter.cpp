//how to store object dyanamacally
#include<iostream>
using namespace std;
class emp
{
    int id;
    float sallary;
    public:
    void setdata(int a ,float b)
    {
        id=a;
        sallary=b;
    }
     void display()
    {
        cout<<"emp info ..."<<endl;
        cout<<"Id : "<<id<<endl;
        cout<<"sallary : "<<sallary<<endl;
    }
};
int main()
{
    emp *ptr=new emp;
    ptr->setdata(1001,12500);
    ptr->display();
    delete ptr;
    return 0;
}