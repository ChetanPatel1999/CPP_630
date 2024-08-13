#include<iostream>
using namespace std;
class account
{
    public:
    string accountno;
    int balance;
    static int totalbankbalance;
    static string bankname;
    public:
    void createaccount()
    {
        cout<<"enter accountno : "<<endl;
        cin>>accountno;
        cout<<"enter balance : "<<endl;
        cin>>balance;
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
   account ac[10];
   int n,i=0,j,num,f,w;
   string acno;
   do
   {
   cout<<"this is bank project :"<<endl;
   cout<<"_______________________________"<<endl;
   cout<<"press 1 for create account :"<<endl;
   cout<<"press 2 for display all account :"<<endl;
   cout<<"press 3 for display single account :"<<endl;
   cout<<"press 4 for withdrol account :"<<endl;
   cout<<"press 5 for deposite account :"<<endl;
   cout<<"press 6 for totalbankbalance display :"<<endl;
   cout<<"press 7 for exit : "<<endl;
   cout<<"press number : ";
   cin>>n;
   switch(n)
   {
    case 1 :
    if(i<10)
    {
        ac[i].createaccount();
        i++;
    } 
    else
    {
        cout<<"you cant open account / bank account open limite reached"<<endl;
    }
     break;
     case 2 :
     if(i>0)
     {
         for(j=0;j<i;j++)
     {
        ac[j].displayacdetail();
     }
     }
     else{
         cout<<"no one account is created "<<endl;
     }
     break;
    case 3 :
     cout<<"entre account number : ";
     cin>>acno;
     f=0;
     for(j=0;j<i;j++)
     {
       if( ac[j].accountno==acno)
       {
        ac[j].displayacdetail();
        f=1;
       }
     }
     if(f==0)
     {
        cout<<"no account exist or your account number wrong"<<endl;
     }
     break;
    case 4 :
    cout<<"entre account number : ";
    cin>>acno;
    cout<<"enter withdral ammount : ";
    cin>>w;
     f=0;
     for(j=0;j<i;j++)
     {
       if( ac[j].accountno==acno)
       {
        ac[j].withdrawl(w);
        f=1;
       }
     }
     if(f==0)
     {
        cout<<"no account exist or your account number wrong"<<endl;
     }
     break;
    case 5 :
    cout<<"entre account number : ";
    cin>>acno;
    cout<<"enter deposite ammount : ";
    cin>>w;
     f=0;
     for(j=0;j<i;j++)
     {
       if( ac[j].accountno==acno)
       {
        ac[j].deposite(w);
        f=1;
       }
     }
     if(f==0)
     {
        cout<<"no account exist or your account number wrong"<<endl;
     }
     break;
    case 6 :account::displaytotalbankbalance();break;
    case 7 :break;
    default : cout<<"you press worng number"<<endl;
   }
   }
   while(n!=7);
     



    return 0;
}