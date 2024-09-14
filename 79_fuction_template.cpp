// fuction template 
#include<iostream>
using namespace std;
template<class T>
void display(T a)
{
 cout<<"a = "<<a<<endl;
}

template<class T>
float avrage(T a,T b)
{
    return (a+b)/2.0;
}
int main()
{
    display(12);
    display("chetan");
    display(67.89);
    cout<<"anrage = "<<avrage(12.78,5.9);
    return 0;
}