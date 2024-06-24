#include<iostream>
using namespace std;
class demo
{
    public:
    void Volume(int a)
    {
       
        cout<<"Volume of square:"<<a*a*a<<"\n";
    }
    void Volume(int a,int b,int c)
    {
     
        cout<<"Volume of cuboid:"<<a*b*c<<"\n";
    }
    void Volume(double a)
    {
       
       float pi=3.14;
        cout<<"Volume of sphere:"<<1.33*pi*a*a*a<<"\n";
    }
    void Volume(int a,int b)
    {
        
       float pi=3.14;
        cout<<"Volume of cone:"<<0.33*pi*a*a*b;
    }
};
int main()
{
    class demo v;
    v.Volume(10,5,20);
    v.Volume(10.00);
    v.Volume(10,20);
    return 0;
}