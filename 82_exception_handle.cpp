// zero division error  is run time error
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    printf("this is division programm..\n");
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);//12 0
    c=a/b;
    printf("division = %d\n",c);
    printf("end of programm\n");
    printf("have a nice day");
    return 0;
}