#include<iostream>
using namespace std;
class circle
{
    float radius;
    float area;
    float circumference;
    public :
    void setradius(float r)
    {
        radius=r;
    }
    void areacal()
    {
        area=3.141*radius*radius;
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
    circle c1,c2,c3;
    c1.setradius(5);
    c2.setradius(12.67);
    c3.setradius(7);
    c1.areacal();
    c1.circumferencecal();
    c2.areacal();
    c2.circumferencecal();
    c3.areacal();
    c3.circumferencecal();
    return 0;
}