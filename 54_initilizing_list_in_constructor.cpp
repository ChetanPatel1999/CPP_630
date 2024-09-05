 #include<iostream>
 using namespace std;
 class demo
 {
    int num1;
    int num2;
    public:
   //intializ list in constructor
    demo(int a,int b):num1(a+5),num2(a+b){}
    void display()
    {
        cout<<"num1= "<<num1<<endl;
        cout<<"num2= "<<num2<<endl;
    }
 };
 int main()
 {
    demo d1(12,45);
    d1.display();
   
   return 0;
 }