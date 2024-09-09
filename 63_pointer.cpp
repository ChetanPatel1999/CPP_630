//we can change any variable value by pointer.
#include<iostream>
using namespace std;
int main()
{
    int a=12;
    int *ptr;
    ptr=&a;
    cout<<int(ptr)<<"  "<<&a<<endl;
    ptr++;
    cout<<int(ptr)<<"  "<<&a<<endl;
    cout<<"value  of a  = "<<a<<endl;
    cout<<"value of a by ptr :"<<(*(ptr-1))<<endl;
    return 0;
}