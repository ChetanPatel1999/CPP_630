#include<iostream>
using namespace std;
class account
{
    string accountno;
    int balance;
    static int totalbankbalance;
    static string bankname;
    public:
    account(string ac,int b)
    {
        accountno=ac;
        balance=b;
        totalbankbalance=totalbankbalance+balance;
    }
    void displayacdetail()
    {
    
        cout<<"account detail ..."<<endl;
    
        cout<<"Bank name : "<<bankname<<endl;
        cout<<"Account no : "<<accountno<<endl;
        cout<<"Accont balance : "<<balance<<endl;
    
    
    }
    static void displaytotalbankbalance()
    {
        cout<<"total bank balance  "<<endl;
    
        cout<<"Balance : "<<totalbankbalance<<endl;
    }
    void withdrawl(int w)
    {
        if(balance>=w)
        {
        balance=balance-w;
        totalbankbalance=totalbankbalance-w;
        cout<<w<<" ammount withdrol succecfully "<<endl;
        }
        else{
            cout<<"ammount is not sufficient "<<endl;
        }
    }
    
        void deposite(int w)
    {
        if(balance+w<=50000)
        {
        balance=balance+w;
        totalbankbalance=totalbankbalance+w;
        cout<<w<<" ammount deposite succecfully "<<endl;
        }
        else{
            cout<<"acoount limite reached so cant add ammount "<<endl;
        }
    }
    
};
int account::totalbankbalance=0;
string account:: bankname="HDFC";
int main()
{
    account ac1("1234",5000);
    account ac2("1236",2000);
    account ac3("1238",1000);
    account ac4("1240",7000);
    
    ac1.displayacdetail();
    cout<<"_________________________________"<<endl;
    ac2.displayacdetail();
    cout<<"_________________________________"<<endl;
    ac3.displayacdetail();
    cout<<"_________________________________"<<endl;
    ac4.displayacdetail();
    cout<<"_________________________________"<<endl;

    account::displaytotalbankbalance();
    cout<<"_________________________________"<<endl;


    ac1.withdrawl(500);
    cout<<"_________________________________"<<endl;


    ac1.displayacdetail();
    cout<<"_________________________________"<<endl;


    account::displaytotalbankbalance();
    cout<<"_________________________________"<<endl;



    ac1.withdrawl(500);
    cout<<"_________________________________"<<endl;


    ac1.displayacdetail();
    cout<<"_________________________________"<<endl;


    account::displaytotalbankbalance();
    cout<<"_________________________________"<<endl;

    ac2.withdrawl(5000);
    cout<<"_________________________________"<<endl;

    ac2.displayacdetail();
    cout<<"_________________________________"<<endl;

    account::displaytotalbankbalance();
    cout<<"_________________________________"<<endl;

    ac3.deposite(50000);
    cout<<"_________________________________"<<endl;

    ac3.displayacdetail();
    cout<<"_________________________________"<<endl;

    account::displaytotalbankbalance();
    cout<<"_________________________________"<<endl;

    
    ac3.deposite(5000);
    cout<<"_________________________________"<<endl;

    ac3.displayacdetail();
    cout<<"_________________________________"<<endl;

    account::displaytotalbankbalance();
    cout<<"_________________________________"<<endl;


    return 0;
}