#include<iostream>
using namespace std;
class batsman{
    protected:
       int bcode;
            char bname[20];
            int innings, notout, runs;
            float batavg;

      public:
          void readdata(){
             cout<<"enter bcode : ";
             cin>>bcode;
             cout<<"enter batsman name : ";
             cin>>bname;
             cout<<"enter innings : ";
             cin>>innings;
             cout<<"enter batsman run : ";
             cin>>runs;
             cout<<"enter batsman notout : ";
             cin>>notout;
    }  
    int sum(){
         return batavg =runs/(innings-notout);
    }   
};

class derive:public batsman{
    public:
    int batavg=0;
    void desplay(){
        batavg = sum();
        cout<<"avg : "<<batavg;
    }
};
int main(){
    class derive bt;
    bt.readdata();
    bt.desplay(); 
return 0;
}