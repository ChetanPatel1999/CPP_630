//dyanamic memory allocation in cpp
#include<iostream>
using namespace std;
int main()
{
    int *ptr= new int[4];
    int *temp;
    temp=ptr;
    *ptr=12;
     ptr++;
    *ptr=34;
     ptr++;
    *ptr=84;
     ptr++;
    *ptr=94;
    int i;
    for(i=0;i<4;i++)
    {
        cout<<(*temp)<<" ";
        temp++;
    }

   return 0;
}