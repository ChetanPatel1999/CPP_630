//static or non static variable
#include<iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;
    static int totalpass;
    static int totalfail;
    static int totalstd;
    public:
    void setdata(string s,int a,float b)
    {
       totalstd++; 
       name=s;
       rno=a;
       per=b;
    }
    void reportcard()
    {
        cout<<"Reportcard of student : "<<endl;
        cout<<"____________________________________"<<endl;
        cout<<"name of student : "<<name<<endl;
        cout<<"rno of student : "<<rno<<endl;
        cout<<"per of student : "<<per<<endl;
        if(per>33)
        {
            totalpass++;
            cout<<"student : PASS"<<endl;
        }
        else
        {
            totalfail++;
            cout<<"student : Fail"<<endl;
        }
        cout<<"____________________________________"<<endl;
    }
    void totalresult()
    {
        cout<<"total Pass :"<<totalpass<<endl;
        cout<<"total Fail :"<<totalfail<<endl;
        cout<<"_________________________________"<<endl;
    }
    void totalstdcount()
    {
        cout<<"total student in class : "<<totalstd<<endl;
    }
};
int student::totalpass=0;
int student::totalfail=0;
int student::totalstd=0;
int main()
{
    student s1,s2,s3,s4;
    s1.setdata("ram",1001,56.89);
    s2.setdata("shyam",1002,78.56);
    s3.setdata("rohit",1003,90.67);
    s4.setdata("john",1004,23.89);
    s1.reportcard();
    s2.reportcard();
    s3.reportcard();
    s4.reportcard();
    s1.totalresult();
    s1.totalstdcount();
    return 0;
}