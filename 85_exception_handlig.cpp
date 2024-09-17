#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,34,56,78};
    int j;
    cin>>j;
    try
    {
        if(j>4)
        {
         throw j;
        }
        
     cout<<arr[j]<<endl;
    }
    catch(int j)
    {
        cout<<"yore index num is "<<j<<endl;
        cout<<"out of index error"<<endl;
    }
    cout<<"programm run succecfully"<<endl;
    return 0;
}