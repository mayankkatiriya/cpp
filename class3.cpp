#include <iostream>
using namespace std;
    class Batsman{
         private:
            int bcode;
            char bname[20];
            int innings, notout, runs;
            float batavg;
            float calcavg(int innings,int notout,int runs);

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
             calcavg(innings, notout, runs);
          }
          void displaydata(){
             cout<<"bcode : "<<bcode<<endl;
             cout<<"batsman name : "<<bname<<endl;
             cout<<"innings : "<<innings<<endl;
             cout<<"enter batsman run : "<<runs<<endl;
             cout<<" batsman notout : "<<notout<<endl;
             cout<<"batsman avg : "<<batavg;
          }
    };
          float Batsman:: calcavg (int innings,int notout,int runs){
            return batavg =runs/(innings-notout);
          }
         
    int main(){
        class Batsman bt;
        bt.readdata();
        bt.displaydata();

    }