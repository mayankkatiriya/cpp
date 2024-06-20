#include <iostream>
    using namespace std;
    class cpp{
        private:
        int Flightnumber;
        char Destination[1000];
        float Distance;
        float Fuel;
        float CALFUEL(int Flightnumber,float Distance,float Fuel);

        public:
        void FEEDINFO(){
             cout<<"enter Flightnumber : ";
             cin>>Flightnumber;
             cout<<"enter Distance  : ";
             cin>>Distance;
             cout<<"enter Destination : ";
             cin>>Destination;
               if(Distance<=1000){
                cout<<"fuel 500";
               }else if (Distance>1000 && Distance<=2000) {
                  cout<<"fuel 1100";
               }else{
                cout<<"fuel 2200";
               }
               
        }
        void SHOWINFO(){
             cout<<"Distance : "<<Flightnumber<<endl;
             cout<<"Distance : "<<Distance<<endl;
             cout<<"enter Destination : "<<Destination<<endl;
              if(Distance<=1000){
                cout<<"fuel 500";
               }else if (Distance>1000 && Distance<=2000) {
                  cout<<"fuel 1100";
               }else{
                cout<<"fuel 2200";
               }
        }
    };
    float cpp:: CALFUEL(int Flightnumber,float Distance,float Fuel){
    }
    int main(){
        class cpp c;
        c.FEEDINFO();
        c.SHOWINFO();
        return 0;
    }