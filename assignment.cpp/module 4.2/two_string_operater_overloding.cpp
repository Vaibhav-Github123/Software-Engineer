#include <iostream>
using namespace std;
class A
{
public:
    string s1;
    string s2;
    A()
    {
    }
    A(string s1, string s2)
    {
        this->s1 = s1;
        this->s2 = s2;
    }
    void display()
    {
        cout << s1 << " " << s2 << endl;
    }
    A operator+(A obj)
    {
        A temp;
        temp.s1 = s1 + obj.s1;
        temp.s2 = s2 + obj.s2;
        return temp;
    }
};
int main()
{
    A a1(" hello ", " good "), a2("rajkumar ", "morning ");
    A a3 = a1 + a2;
    a3.display();
}