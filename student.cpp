#include <iostream>
 using namespace std;
      class student{
        private:
            int adno;
            
            char sname[20];
            float eng,sci,maths,total;
            float ctotal(int eng,int maths,int sci);


        public:
        void getdata(){
            for(int j=0;j<=3;j++){

            cout<<"enter ad no. : ";
            cin>>adno;
             cout<<"enter student name : ";
            cin>>sname;
             cout<<"enter eng marks : ";
            cin>>eng;
             cout<<"enter maths marks : ";
            cin>>maths;
             cout<<"enter sci marks : ";
            cin>>sci;
            }

        }
        void showdata(){
              for(int j=0;j<=3;j++){
          cout<<"adno : "<<adno<<endl;
          cout<<"sname : "<<sname<<endl;
          cout<<"eng marks : "<<eng<<endl;
           cout<<"maths marks : "<<maths<<endl;
            cout<<"sci marks : "<<sci<<endl;
          cout<<"total : "<<ctotal(eng,maths,sci);
              }
    }
        
    };
    float student:: ctotal(int eng,int maths,int sci){

        return eng+maths+sci;
    }

    int main(){
        class student st[3];
       st[3].getdata();
       st[3].showdata();


        return 0;
    }