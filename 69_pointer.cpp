//dyanamic memory allocation in cpp
#include<iostream>
using namespace std;
int main()
{
    int *ptr= new int[4];
    int i;
    for(i=0;i<4;i++)
    {
        cin>>(ptr[i]);
    }
    for(i=0;i<4;i++)
    {
        cout<<(*(ptr+i))<<" ";
    }
   return 0;
}