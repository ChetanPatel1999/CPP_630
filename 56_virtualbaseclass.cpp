//virtual base class
#include<iostream>
using namespace std;
class base
{
    public:
    void display()
    {
        cout<<"base display method"<<endl;
    }
};
class D1:virtual public base
{
 public:
 void show()
 {
    cout<<"D1 method is called"<<endl;
 }
};
class D2:virtual public base{
 public:
 void disp()
 {
    cout<<"D2 method is called"<<endl;
 }
};
class child:public D1 ,public D2
{

};
int main()
{
    child obj;
    obj.display();
    return 0;
}