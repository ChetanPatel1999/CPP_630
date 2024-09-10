// how to crete object array dyanimacally
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    void setdata(int a, float b)
    {
        id = a;
        sallary = b;
    }
    void display()
    {
        cout << "emp info ..." << endl;
        cout << "Id : " << id << endl;
        cout << "sallary : " << sallary << endl;
    }
};
int main()
{
    emp *ptr = new emp[3];
    emp *temp=ptr;
    int i,a;
    float b;
    for (i = 0; i < 3; i++)
    {
        cout << "enter id : ";
        cin >> a;
        cout << "enter sal :";
        cin >> b;
        ptr->setdata(a, b);
        ptr++;
    }
    ptr=temp;
    for (i = 0; i < 3; i++)
    {
        ptr->display();
        ptr++;
    }
    ptr=temp;
    delete ptr;
    return 0;
}