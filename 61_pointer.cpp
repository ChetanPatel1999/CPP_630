#include<iostream>
using namespace std;
int main()
{
    int a=12;
    int *ptr;
    ptr=&a;
    cout<<"value of a = "<<a<<endl;
    cout<<"adress of a = "<<(&a)<<endl;
    cout<<"adress of a by ptr = "<<ptr<<endl;
    cout<<"value  of a by ptr = "<<(*ptr)<<endl;
    return 0;
}