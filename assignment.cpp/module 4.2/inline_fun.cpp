#include <iostream>
using namespace std;
inline int multiplication(int a, int b)
{
    return a * b;
}
inline int cubic(int a, int b, int c)
{
    return a * b * c;
}

int main()
{
    cout << "multiplication of a and b is " << multiplication(5, 9) << endl;
    cout << "cubic of a and b and c is " << cubic(20, 20, 20) << endl;
    return 0;
}