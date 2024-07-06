#include<iostream>
using namespace std;

class student{
        
        protected:
            int adno;
            char sname[20];
           

            public:
            void getdata(){
            cout<<"enter ad no. : ";
            cin>>adno;
             cout<<"enter student name : ";
            cin>>sname;
           
    }
};

class student1{

     protected:
           
            float eng,sci,maths,total=0;
    

        
        public:
        void desplay(){

             cout<<"enter eng marks : ";
            cin>>eng;
             cout<<"enter maths marks : ";
            cin>>maths;
             cout<<"enter sci marks : ";
            cin>>sci;
        }

};

class derive:public student,public student1{

           
                public:
                float total=0;
              void desplay1(){
                        total = eng+maths+sci;
                        cout<<"total is : "<<total;
              }
};
int main(){

    class derive st;
    st.getdata();
    st.desplay();
    st.desplay1();
return 0;
}