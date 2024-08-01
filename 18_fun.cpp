#include<iostream>
using namespace std;
int* squarecube(int num)
{
    int s,c;
    s=num*num;
    c=num*num*num;
    static int arr[]={s,c,89};
    return &arr[0];
}
int main()
{
   int *a=squarecube(5);
   cout<<(*a)<<endl;
   a++;
   cout<<(*a)<<endl;
   a++;
   cout<<(*a)<<endl;


    return 0;
}