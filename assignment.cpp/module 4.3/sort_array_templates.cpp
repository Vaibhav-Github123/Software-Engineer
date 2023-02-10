#include <iostream>
using namespace std;
template <class t1>
class A
{
public:
    t1 a[5];
    t1 i;

    void setdata()
    {
        for (i = 0; i < 5; i++)
        {

            cout << "enter value";
            cin >> a[i];
        }
    }
    void display()
    {
        t1 i, j, temp;
        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j < 5; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
            cout << " " << a[i];
        }
    }
};
int main()
{
    A<int> a1;
    a1.setdata();
    a1.display();

    return 0;
}