 #include <iostream>
    using namespace std;
    class complex{
        int x,y;

        public:

        void getdata(int a,int b){
            x=a;
            y=b;
        }
        void desplay(){

                cout<<"value of x : "<<x<<endl;
                cout<<"value of y : "<<y<<endl;

            }

           void operator-(){
               x=-x;
               y=-y;
            }
    };

    int main(){
        complex s;
        s.getdata(4,-5);
        s.desplay();
        cout<<"after function call"<<endl;
        -s;
        s.desplay();
        return 0;
    }