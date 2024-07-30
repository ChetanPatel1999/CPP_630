#include<iostream>
using namespace std;
void add()
{
    int a,b,c;
    cout<<"enter two num :";
    cin>>a>>b;
    c=a+b;
    cout<<"sum = "<<c<<endl;
}
void nagpos()
{
    int num;
    cout<<"enter a num :";
    cin>>num;
    if(num<0)
    {
        cout<<"num is nagative";
    }
    else{
        cout<<"num is postive";
    }
}
int main()
{
   add();
   add();
   nagpos();
    return 0;
}