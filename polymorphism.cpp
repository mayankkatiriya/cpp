#include<iostream>
using namespace std;
        class Demo{
                public:
                void test(){
                    cout<<"defulat function call"<<endl;
                }
                void test(int a){
                    cout<<"perameter function call : "<<a<<endl;
                }
                void test(int a,int b){
                    cout<<"adition a and b : "<<a+b<<endl;
                }
  };
        int main(){
            class Demo t;
            t.test();
            t.test(10);
            t.test(10,20);
            return 0;
    }