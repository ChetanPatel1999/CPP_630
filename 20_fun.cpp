#include<iostream>
using namespace std;
void fun()
{
    static int a=12;//its exicute only once time in program
    cout<<a<<endl;
    a++;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}