#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter a character : ";
    cin>>ch;
    if(ch>='A' && ch<='Z' ||ch>='a' && ch<='z' )
    {
        cout<<"alphbet char"<<endl;
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<"digit char"<<endl;
    }
    else{
        cout<<"special char"<<endl;
    }
    return 0;
}