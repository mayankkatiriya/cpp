#include<iostream>
using namespace std;
int main(){
    int i,j;
    int arr[3][3];
         for(int i=0;i<3;i++){
              for(int j=0;j<3;j++){
            cout<<"the element is :  ";
             cin>>arr[i][j];
         }
 }
         for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                      if(arr[i][j]==0){
                        cout<<" ";
                      }else{
                        cout<<arr[i][j];
                 }
         }
                 cout<<endl;
         }

    return 0;
}
                 