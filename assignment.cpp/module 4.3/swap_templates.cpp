#include <iostream>
using namespace std;
template <class t1, class t2, class t3>
class A
{
    t1 a;
    t2 b;
    t3 temp;

public:
    A(t1 a, t2 b, t3 temp)
    {
        this->a = a;
        this->b = b;
        this->temp = temp;
    }
    void display()
    {
        temp = a;
        a = b;
        b = temp;
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
    }
};
int main()
{
    A<int, int,int > a1(55, 66,0);
    a1.display();
    return 0;
}