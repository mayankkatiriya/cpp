#include<iostream>
using namespace std;
class Volume
{
    public:
    Volume(int a)
    {
       
        cout<<"Volume of square:"<<a*a*a<<"\n";
    }
    Volume(int a,int b,int c)
    {
     
        cout<<"Volume of cuboid:"<<a*b*c<<"\n";
    }
    Volume(double a)
    {
       
       float pi=3.14;
        cout<<"Volume of sphere:"<<1.33*pi*a*a*a<<"\n";
    }
    Volume(int a,int b)
    {
        
       float pi=3.14;
        cout<<"Volume of cone:"<<0.33*pi*a*a*b;
    }
};
int main()
{
    Volume obj(10),obj1(10,5,20),obj2(10.00),obj3(10,20);
    return 0;
}