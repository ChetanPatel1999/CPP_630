//dyanamic memory allocation in cpp
#include<iostream>
using namespace std;
int main()
{
    // float *ptr= new float;
    // *ptr=56.78;
    // cout<<"value = "<<(*ptr);

    float *ptr= new float(34.89);
    cout<<"value = "<<(*ptr)<<endl;
    *ptr=90.67;
    cout<<"value = "<<(*ptr)<<endl;
    delete ptr;
    cout<<"value = "<<(*ptr)<<endl;

   return 0;
}