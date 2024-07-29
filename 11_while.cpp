//wap to convert binary num into decimal.
#include<iostream>
using namespace std;
int main()
{
    int num,rem,des=0,b=1;
    cout<<"enter a num : ";
    cin>>num;
    while(num>0)//1100
    {
        rem=num%10;
        des=des+(rem*b);
        b=b*2;
        num=num/10;
    }
    cout<<"decimal number : "<<des<<endl;
    return 0;
}