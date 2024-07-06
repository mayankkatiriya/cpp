#include<iostream>
using namespace std;
class large{

    friend void number(large a);

        int x,y;

    public:
    void setdata(int a,int b){
        x=a,y=b;
    }
};
void number(large a){

        if(a.x>a.y){
            cout<<"x is large";
        }else{
            cout<<"y is larage";
        }
}
int main(){
    large t;
     t.setdata(10,20);
     number(t);
return 0;
}