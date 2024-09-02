#include<iostream>
using namespace std;
class parant
{
 public:
 void show()
 {
    cout<<"parant class show method"<<endl;
 }

};
class child:public parant
{
 public:
 void show()
 {
    cout<<"child class show method"<<endl;
 }
};
int main()
{
    child o;
    o.show();
    return 0;
}