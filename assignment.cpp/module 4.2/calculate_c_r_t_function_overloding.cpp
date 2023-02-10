#include <iostream>
using namespace std;
void Area(int r)
{
    cout << "Area of circle is " << 3.14 * r * r << endl;
};
void Area(int l, int w)
{
    cout << "Area of Rectangle is " << l * w << endl;
};
void Area(float t, int l, int w)
{
    cout << "Area of triangle is " << t * l * w << endl;
};
int main()
{
    Area(5, 5);
    Area(6.5, 5, 6);
    Area(5);

    return 0;
}