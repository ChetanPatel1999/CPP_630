//we can change any variable value by pointer.
#include<iostream>
using namespace std;
int main()
{
    int a=12;
    int *ptr;
    ptr=&a;
    *ptr=90;
    cout<<"value  of a  = "<<a<<endl;
    cout<<"value of a by ptr :"<<(*ptr)<<endl;
    return 0;
}