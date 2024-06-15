#include<iostream>
    using namespace std;
int main(){
    int maths,phy,chem,total;
    float per;

    cout<<"maths marks : ";
    cin>>maths;
    cout<<"phy marks : ";
    cin>>phy;
    cout<<"chem marks : ";
    cin>>chem;

            total = maths+phy+chem;
            per = total/3;
                    cout<<"total : "<<int(total)<<endl;
                    cout<<"per : "<<float(per);
                    return 0;
}
