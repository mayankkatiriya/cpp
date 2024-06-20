#include <iostream>
    using namespace std;
    class book{
        private:
           int book_no;
           char book_title[20];
           float price=2;
           float tcost;
           int copy;
           float total_cost(int copy);

        public:
        void input(){

        
           cout<<"book no. : ";
           cin>>book_no;
           cout<<"book title : ";
           cin>>book_title;
           cout<<"enter copy : ";
           cin>>copy;
           total_cost(copy);
        }
        void purchase(){
            cout<<"book no : "<<book_no<<endl;
            cout<<"book title : "<<book_title<<endl;
            cout<<"enter copy : "<<copy<<endl;
            cout<<"total cost : "<<tcost;
        }
    };
    float book:: total_cost(int copy){
            tcost = price*copy;
    }
    int main(){
        class book b;
        b.input();
        b.purchase();
        return 0;
    }