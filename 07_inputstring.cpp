#include<iostream>
using namespace std;
int main()
{
    string a;
    cout<<"enter a string :";
    // cin>>a;
    getline(cin,a);//chetan
    cout<<"value of a :"<<a<<endl;
    cout<<"value of frist index "<<a[0]<<endl;
    return 0;
}