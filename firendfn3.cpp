#include<iostream>
using namespace std;
class large{

    friend void number(large a);

        int x,y,z;

    public:
    void setdata(int a,int b,int c){
        x=a,y=b,z=c;
    }
};
void number(large a){

        if(a.x>a.y && a.x>a.z){
            cout<<"x is large";
        }else  if(a.y>a.z){
            cout<<"y is larage";
        }else{
            cout<<"z is larage";
        }
}
int main(){
    large t;
     t.setdata(100,20,50);
     number(t);
return 0;
}