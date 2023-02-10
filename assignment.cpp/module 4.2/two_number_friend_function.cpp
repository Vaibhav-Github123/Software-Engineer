#include <iostream>
using namespace std;
class Swap
{
    int a, b, temp;

public:
    void input()
    {
        cout << " Enter two Numbers: ";
        cin >> a >> b;
    }
    friend void swap(Swap s);
    void dispiay()
    {
        cout << " After swap a is: " << a << endl;
        cout << " After swap b is: " << b << endl;
    }
};
void swap(Swap s)
{
    s.temp = s.a;
    s.a = s.b;
    s.b = s.temp;
}
int main()
{
    Swap s;
    s.input();
    swap(s);
    s.dispiay();

    return 0;
}