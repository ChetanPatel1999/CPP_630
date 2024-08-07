#include<iostream>
using namespace std;
class student
{
    private:
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
    void reportcard()
    {
        cout<<"Reportcard of student : "<<endl;
        cout<<"____________________________________"<<endl;
        cout<<"name of student : "<<name<<endl;
        cout<<"rno of student : "<<rno<<endl;
        cout<<"per of student : "<<per<<endl;
        if(per>33)
        {
            cout<<"student : PASS"<<endl;
        }
        else
        {
            cout<<"student : Fail"<<endl;
        }
        cout<<"____________________________________"<<endl;
    }
};
int main()
{
    student s1,s2,s3,s4;
    s1.setdata("ram",1001,56.89);
    s2.setdata("shyam",1002,23.56);
    s3.setdata("rohit",1003,90.67);
    s4.setdata("john",1004,12.89);
    s1.reportcard();
    s2.reportcard();
    s3.reportcard();
    s4.reportcard();
    return 0;
}