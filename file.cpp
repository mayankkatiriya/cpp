#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    char input[50];
    ofstream os;
    os.open("xyz.txt");

    cout << "enter name : ";
    cin.getline(input, 100);
    os << input << endl;

    cout << "enter mobil number : ";
    cin >> input;
    cin.ignore();
    os << input << endl;

    os.close();

    ifstream is;
    string line;
    is.open("xyz.txt");

    cout << "read text file : " << endl;
    while (getline(is, line))
    {
        cout << line << endl;
    }

    is.close();
    return 0;

  
}