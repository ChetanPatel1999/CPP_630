#include<iostream>
using namespace std;
class demo
{
    public:
    demo()//constructor
    {
      cout<<"constructor is called"<<endl;
    }
    ~demo()//destructor
    {
     cout<<"destructor is called"<<endl;
    }
};
int main()
{
    demo d1,d2;
    cout<<"main fuction"<<endl;
    cout<<"second line in main fuction"<<endl;
    {
      demo d3;  
      cout<<"inside block"<<endl;

    }
    cout<<"outside block"<<endl;

    return 0;
}