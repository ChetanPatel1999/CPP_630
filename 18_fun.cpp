#include<iostream>
using namespace std;
int* sc(int num)
{
    int s,c;
    s=num*num;
    c=num*num*num;
    static int arr[]={s,c};
    return arr;
}
int main()
{
   int *a=sc(5);
   cout<<(*a)<<endl;
   a++;
   cout<<(*a)<<endl;

    return 0;
}