#include<iostream>
#include<fstream>
#include<io.h>
using namespace std;
int main()
{
    //rmdir("E:\\song\\southsong"); //delete folder
    remove("E:\\song\\southsong\\abc.txt");//delete file
    mkdir("E:\\song\\southsong");// create folder
    ofstream w("E:\\song\\southsong\\hi.txt");// create file
    return 0;
}