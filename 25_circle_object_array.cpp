//object array  in cpp
#include<iostream>
using namespace std;
class circle
{
    float radius;
    float area;
    float circumference;
    public :
    void setradius()
    {
        cout<<"enter radius : ";
        cin>>radius;
    }
    void areacal()
    {
        float pi=3.141;
        area=pi*radius*radius;
        cout<<"arae of circle which radius "<<radius<<" = "<<area<<endl;
    }
     void circumferencecal()
    {
        circumference=2*3.141*radius;//2pir
        cout<<"circumference of circle which radius "<<radius<<" = "<<circumference<<endl;
    }
};
int main()
{
    int n;
    cout<<"no of circle :";
    cin>>n;//5
    circle c[n];//c[5]
    int i;
    for(i=0;i<n;i++)
    {
     c[i].setradius();
    }
    for(i=0;i<n;i++)
   {
     c[i].areacal();
     c[i].circumferencecal();
   }   
    return 0;
}