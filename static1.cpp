#include <iostream>
using namespace std;

class student
{
public:
    static int number;

    static void Desplay()
    {
        for (int i = 0; i = 5; i++)
        {

            cout << "enter student ad no : ";
            cin >> i;
        }
    }
};
int student :: number=0;
int main()
{

    student h1;
    h1.Desplay();

     cout<<"static : "<<h1.number;

    return 0;
}