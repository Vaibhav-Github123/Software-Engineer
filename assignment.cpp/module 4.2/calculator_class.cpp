#include <iostream>
using namespace std;
class calculator
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void Addition()
    {
        cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
    }
    void multiplication()
    {
        cout << "multiplication of " << a << " and " << b << " is " << a * b << endl;
    }
    void subtraction()
    {
        cout << "subtraction of " << a << " and " << b << " is " << a - b << endl;
    }
    void division()
    {
        cout << "division of " << a << " and " << b << " is " << a / b << endl;
    }
    void modulos()
    {
        cout << "modulos of " << a << " and " << b << " is " << a % b << endl;
    }
};
int main()
{
    calculator c1;
    c1.setData(10, 20);
    c1.Addition();
    c1.multiplication();
    c1.subtraction();
    c1.division();
    c1.modulos();
    return 0;
}