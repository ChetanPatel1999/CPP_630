#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a num : ";
    cin>>num;
    switch(num)
    {
        case 1: cout<<"ONE";break;
        case 2: cout<<"TWO";break;
        case 3: cout<<"THREE";break;
        case 4: cout<<"FOURE";break;
        case 5: 
        goto lab;
        default:cout<<"worng input";
    }
    exit(0);
    lab:
    cout<<"cause of goto";
    return 0;
}