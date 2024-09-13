#include <iostream>
using namespace std;

class stddata // abstract class
{
    string name;
    int rno;

public:
    virtual void dataentry() = 0; // pure virtual method
    virtual void searchstd() = 0;
    virtual void deletestd() = 0;
    void display()
    {
        cout << "hi display " << endl;
    }
};
class bca : public stddata
{
public:
    void dataentry()
    {
        cout << "enter student information" << endl;
    }
    void searchstd()
    {
        cout << "enter std rno for search student" << endl;
    }
    void deletestd()
    {
        cout << "enter std rno for delete student" << endl;
    }
};
class mba : public stddata
{
public:
    void dataentry()
    {
        cout << "enter student information" << endl;
    }
    void searchstd()
    {
        cout << "enter std rno for search student" << endl;
    }
    void deletestd()
    {
        cout << "enter std rno for delete student" << endl;
    }
};

int main()
{
    bca obj;
    obj.dataentry();
    obj.deletestd();
    obj.searchstd();
    obj.display();
    mba mb;
    return 0;
}