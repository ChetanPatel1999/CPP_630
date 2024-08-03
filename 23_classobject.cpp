#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int rno;
    float per;
    public:
    void setdata()
    {
      cout<<"enter name :";
      cin>>name;
      cout<<"enter rno : ";
      cin>>rno;
      cout<<"enter per :";
      cin>>per;
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
    student s1,s2,s3,s4;
    s1.setdata();
    s2.setdata();
    s3.setdata();
    s4.setdata();
    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}