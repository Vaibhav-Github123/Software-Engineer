#include <iostream>
using namespace std;
class Program
{
    int a = 5, b = 4;

public:
    Program()
    {
        cout << "Addition of a and b is " << a + b << endl;

        cout << "subtraction of a and b is " << a - b << endl;

        cout << "division of a and b is " << a / b << endl;

        cout << "multiplication of a and b is " << a * b << endl;
    }
};
int main()
{
    Program a1;

    return 0;
}