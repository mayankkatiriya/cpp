#include<iostream>
using namespace std;
class hello{
        public:
         static int number;
         int i=0;

         hello(){

            number++;
            i++;

         }
         void desplay(){
            cout<<"desplay function call....."<<i<<endl;
         }

         static void Desplay(){
            cout<<"static function call....."<<number<<endl;

         }
};
int hello :: number=0;

int main()
{
    hello s1;
    s1.desplay();

   hello s2;
   s2.Desplay();

   cout<<"static : "<<s2.number;
}