//dyanamic memory allocation in cpp
#include<iostream>
using namespace std;
int main()
{
    // int *ptr= new int;
    // *ptr=56;
    // cout<<"value = "<<(*ptr);

    int *ptr= new int(34);
    cout<<"value = "<<(*ptr)<<endl;
    *ptr=90;
    cout<<"value = "<<(*ptr)<<endl;
    delete ptr;
    cout<<"value = "<<(*ptr)<<endl;

   return 0;
}