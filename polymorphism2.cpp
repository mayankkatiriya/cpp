#include<iostream>
using namespace std;
class demo{
    public:
    void Area(int a)
    {
        cout<<"Area of square:"<<a*a<<endl;
    }
    void Area(int a,int b){
        cout<<"Area of rectangle:"<<a*b<<endl;
    }
    void Area(double a){
        cout<<"Area of circle:"<<3.14*a*a<<endl;
    }
    void Area(double a,int b){
        cout<<"Area of triangle:"<<0.5*a*b<<endl;
    }
};
int main(){
    class demo a;
        a.Area(10,10);
        a.Area(10.0);
        a.Area(10.0,10);
}