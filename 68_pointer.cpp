//dyanamic memory allocation in cpp
#include<iostream>
using namespace std;
int main()
{
    int *ptr= new int[4];
    int i;
    *(ptr)=12;
    *(ptr+1)=82;
    *(ptr+2)=823;
    *(ptr+3)=89;
    for(i=0;i<4;i++)
    {
        //cout<<(*(ptr+i))<<" ";
        cout<<(ptr[i])<<" ";
    }

   return 0;
}