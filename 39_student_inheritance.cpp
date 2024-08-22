#include<iostream>
using namespace std;
class student
{
    string name;
    int rno;
    public:
    void setstddata(string s,int a)
    {
        name=s;
        rno=a;
    }
    void displaystd()
    {
        cout<<"name of student : "<<name<<endl;
        cout<<"rno of student : "<<rno<<endl;
    }
};
class comstd :public student
{
    int bs;
    int ac;
    int ip;
    public:
    void setcommarks(string s, int x,int a,int b,int c)
    {
        bs=a;
        ac=b;
        ip=c;
        setstddata(s,x);
    }
    void displaycommarks()
    {
        displaystd();
        cout<<"business : "<<bs<<endl;
        cout<<"account : "<<ac<<endl;
        cout<<"IP : "<<ip<<endl;
    }

};
class mathstd :public student
{
    int math;
    int phy;
    int che;
    public:
    void setmathmarks(string s1, int x,int a,int b,int c)
    {
        math=a;
        phy=b;
        che=c;
        setstddata(s1,x);
    }
    void displaymathmarks()
    {
        displaystd();
        cout<<"math : "<<math<<endl;
        cout<<"physics : "<<phy<<endl;
        cout<<"Chemestry : "<<che<<endl;
    }

};
int main()
{
    comstd s1;
    s1.setcommarks("ram",1001,50,67,90);
    s1.displaycommarks();
    cout<<"_________________________________________________"<<endl;
    mathstd s2;
    s2.setmathmarks("shaym",1002,56,78,90);
    s2.displaymathmarks();
    return 0;
}