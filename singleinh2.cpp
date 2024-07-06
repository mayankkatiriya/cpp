#include <iostream>
#include <valarray>
using namespace std;

class student
{
protected:
    int adno;
    char sname[20];
    int eng, sci, maths;

public:
    void getdata()
    {
        cout << "enter ad no. : ";
        cin >> adno;
        cout << "enter student name : ";
        cin >> sname;
        cout << "enter eng marks : ";
        cin >> eng;
        cout << "enter maths marks : ";
        cin >> maths;
        cout << "enter sci marks : ";
        cin >> sci;
    }
    int sum()
    {
        return eng + maths + sci;
    }
};

class result : public student
{
public:
    int total = 0;

    void display()
    {
        total = sum();
        cout << "total is : " << total;
    }
};
int main()
{
    class result st;
    st.getdata();
    st.display();
    return 0;
}