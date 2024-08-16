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
    student(string s,int a,float b)
    {
       totalstd++; 
       name=s;
       rno=a;
       per=b;
    }
    student(){}
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
    static void totalresult()
    {
        cout<<"Class Total Fail Pass result :"<<endl;
        cout<<"total Pass :"<<totalpass<<endl;
        cout<<"total Fail :"<<totalfail<<endl;
        cout<<"_________________________________"<<endl;
    }
    static void totalstdcount()
    {
        cout<<"total student in class : "<<totalstd<<endl;
        cout<<"_________________________________"<<endl;
    }
   static void classinfo()
    {
        cout<<"class description here "<<endl;
        cout<<"setdata method set data of class data member"<<endl;
        cout<<"reportcard method"<<endl;
        cout<<"_________________________________"<<endl;
    }
    // void average(student obj)
    // {
    //    float av;
    //    av=(per+obj.per)/2.0;
    //    cout<<"average marks of "<<name<<" and "<<obj.name<<" = "<<av<<endl;
    //    cout<<"________________________________________________________"<<endl;
    // }
     static void average(student obj1, student obj2)
    {
       float av;
       av=(obj1.per+obj2.per)/2.0;
       cout<<"average marks of "<<obj1.name<<" and "<<obj2.name<<" = "<<av<<endl;
       cout<<"________________________________________________________"<<endl;
    }
        static void average(student obj1, student obj2 ,student obj3) 
    {
       float av;
       av=(obj1.per+obj2.per+obj3.per)/3.0;
       cout<<"average marks of "<<obj1.name<<" and "<<obj2.name<<" and "<<obj3.name<<" = "<<av<<endl;
       cout<<"________________________________________________________"<<endl;
    }
           static void average(student obj1, student obj2 ,student obj3, student obj4) 
    {
       float av;
       av=(obj1.per+obj2.per+obj3.per+obj4.per)/4.0;
       cout<<"average marks of "<<obj1.name<<" and "<<obj2.name<<" and "<<obj3.name<<" and "<<obj4.name<<" = "<<av<<endl;
       cout<<"________________________________________________________"<<endl;
    }
};
int student::totalpass=0;
int student::totalfail=0;
int student::totalstd=0;
int main()
{
    student::classinfo();
    student s5;
    student s1("ram",1001,56.89);
    student s2("shyam",1002,78.56);
    student s3("rohit",1003,90.67);
    student s4("john",1004,23.89);
    s1.reportcard();
    s2.reportcard();
    s3.reportcard();
    s4.reportcard();
    student::totalresult();
    student::totalstdcount();
    student::average(s1,s2);
    student::average(s3,s4);
    student::average(s1,s2,s3);
    student::average(s1,s2,s3,s4);
   // s1.average(s3);
    return 0;
}