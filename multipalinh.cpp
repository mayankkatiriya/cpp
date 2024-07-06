#include <iostream>
using namespace std;

class number
{
protected:
    int a;

public:
    void setA()
    {
        cout << "enter A : ";
        cin >> a;
    }
};
class number1
{
protected:
    int b;

public:
    void setB()
    {
        cout << "enter B : ";
        cin >> b;
    }
};

class derive : public number, public number1
{
public:
    void product()
    {
        cout << "get a & b : " << a * b;
    }
};
int main()
{

    class derive c;
    c.setA();
    c.setB();
    c.product();
    return 0;
}