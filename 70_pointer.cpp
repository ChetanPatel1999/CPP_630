// arrow operator use for pointer
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
    emp e1;
    emp *ptr;
    ptr=&e1;
   // (*ptr).setdata(1001,12500);
   // (*ptr).display();
    ptr->setdata(1001,12500);
    ptr->display();

    return 0;
}