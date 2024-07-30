#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,34,56,78,90,89};
    int i,sum=0;
    cout<<"array elements are : ";
    for(i=0;i<=5;i++)
    {
        cout<<arr[i]<<" ";
    }
    i=0;
    while(i<6)
    {
        sum=sum+arr[i];
        i++;
    }
    cout<<endl<<"sum of array element = "<<sum<<endl;
    return 0;
}