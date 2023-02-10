#include <iostream>
using namespace std;
class a
{
protected:
    int id;
    string name;

public:
    void setdata(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
};
class b : public a
{
protected:
    float m1;
    float m2;
    float m;

public:
    void setdata1(float m1, float m2)
    {
        this->m1 = m1;
        this->m2 = m2;
        m = m1 + m2;
    }
};
class c : public b
{
public:
    void getdata()
    {
        cout << id << endl;
        cout << "name: " << name << endl;
        cout << "mark: " << m1 << " " << m2 << endl;
        cout << "total marks:" << m << endl;
        cout << "percentage: " << m / 2 << endl;
    }
};
int main()
{
    c c1;
    c1.setdata(101, "rajkumar");
    c1.setdata1(59, 66);
    c1.getdata();
    return 0;
}