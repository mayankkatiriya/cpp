#include<iostream>
using namespace std;
        class test{
                public:
                 test(){
                    cout<<"defulat function call"<<endl;
                }
                 test(int a){
                    cout<<"perameter function call : "<<a<<endl;
                }
                 test(int a,int b){
                    cout<<"adition aand b : "<<a+b<<endl;
                }
  };
        int main(){
            test t(10),t1(10,20);
            return 0;
    }