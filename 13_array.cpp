#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int i;
    cout<<"enter array elemeent : ";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"array elemet are : ";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    int max=arr[0];
    for(i=0;i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<endl<<"max value in array = "<<max<<endl;
    return 0;
}