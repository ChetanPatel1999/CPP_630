#include<iostream>
using namespace std;
int* fun (int a)
{
    static int b;
    b=a;
    cout<<b<<endl;
    return &b;
}
int main()
{
    cout<<(*(fun(12)))<<endl;
    int *ptr=fun(78);
    cout<<(*ptr)<<endl;
    return 0;
}