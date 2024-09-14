// fuction template 
#include<iostream>
using namespace std;
template<class T>
void display(T a)
{
 cout<<"a = "<<a<<endl;
}

void display(int a)
{
    cout<<"priority given math variable fuction"<<endl;
    cout<<"a = "<<a<<endl;
}
int main()
{
    display(12);
    display("chetan");
    display(67.89);
    display('K');
    return 0;
}