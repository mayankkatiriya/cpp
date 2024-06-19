#include <iostream>
    using namespace std;
    class TEST{
        private:
            int testcode;
            int NoCandidate;
            int CenterReqd;
            char Description[1000];
            float  CALCNTR( int testcode,int NoCandidate, int CenterReqd);


        public:
        void SCHEDULE(){
             cout<<"enter testcode : ";
             cin>>testcode;
             cout<<"enter NoCandidate : ";
             cin>>NoCandidate;
             cout<<"enter CenterReqd : ";
             cin>>CenterReqd;
             cout<<"enter Description : ";
             cin>>Description;
            }
        void DISPTEST(){
             cout<<"testcode : "<<testcode<<endl;
             cout<<"NoCandidate : "<<NoCandidate<<endl;
             cout<<"CenterReqd : "<<CenterReqd<<endl;
             cout<<"Description : "<<Description<<endl;
             cout<<"calcntr : "<<CALCNTR(testcode, NoCandidate,CenterReqd);
            }
    };
    float  TEST:: CALCNTR( int testcode,int NoCandidate, int CenterReq){
        return (NoCandidate/100+1);

    }
    int main (){
        class TEST t1;
        t1.SCHEDULE();
        t1.DISPTEST();
        return 0;
    }