#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i,*ptr;
    ptr=&arr[0];
    for(i=0;i<5;i++)
    {
        cin>>ptr[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<(*ptr)<<" ";
        ptr++;
    }
    return 0;
}