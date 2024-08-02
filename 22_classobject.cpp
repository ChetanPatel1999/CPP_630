#include<iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;
    public:
    void setdata(string s,int a,float b)
    {
       name=s;
       rno=a;
       per=b;
    }
    void display()
    {
        cout<<"name of student : "<<name<<endl;
        cout<<"rno of student : "<<rno<<endl;
        cout<<"per of student : "<<per<<endl;
        cout<<"____________________________________"<<endl;
    }
};
int main()
{
    student s1,s2,s3;
    s1.setdata("ram",1001,56.89);
    s2.setdata("shyam",1002,89.56);
    s3.setdata("rohit",1003,90.67);
    s1.display();
    s2.display();
    s3.display();

    return 0;
}