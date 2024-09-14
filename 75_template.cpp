// template class with single parameter
#include<iostream>
using namespace std;
template<class t>
class display
{
    public :
    void disp(t a)
    {
        cout<<"a = "<<a<<endl;
    }
};
int main()
{
    display<string> d1;
    d1.disp("string");
    display<int> d2;
    d2.disp(12);
    display<float> d3;
    d3.disp(90.67);
    display<char> d4;
    d4.disp('A');
    return 0;
}