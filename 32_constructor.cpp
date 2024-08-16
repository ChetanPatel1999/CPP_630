#include<iostream>
using namespace std;
class demo
{
    public:
    demo()
    {
         printf("0 args constructor called\n");
    }
    demo(int a)
    {
          printf("1 args constructor called\n");
    }
    demo(int a,int b)
    {
          printf("2 args constructor called\n");
    }
    demo(int a,int b,int c)
    {
          printf("3 args constructor called\n");
    }
      
};
int main()
{
    demo d1,d2(34),d3(12,45),d4(67,89);
    return 0;
}
