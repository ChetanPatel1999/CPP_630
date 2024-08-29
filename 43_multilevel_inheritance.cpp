#include<iostream>
using namespace std;
class student
{
   int  rno;
   string name;
   public:
   void setdata(string s, int a)
   {
    rno=a;
    name=s;
   }
   void display()
   {
    cout<<"name : "<<name<<endl;
    cout<<"rno : "<<rno<<endl;
   }
};
class marks :public student
{
    protected:
    int hindi;
    int english;
    public:
    void  setmarks(int a,int b)
    {
      hindi=a;
      english=b;
    }
    void displaymarks()
    {
        cout<<"Hindi :"<<hindi<<endl;
        cout<<"english : "<<english<<endl;
    }
};
class result :public marks
{
   public:
   void displayresult()
   {
    display();
    displaymarks();
    float per;
    per=(hindi+english)/2.0;
    cout<<"percentage : "<<per<<endl;
   }
};
int main()
{
    result s1;
    s1.setdata("ram",1001);
    s1.setmarks(50,60);
    s1.displayresult();
    return 0;
}