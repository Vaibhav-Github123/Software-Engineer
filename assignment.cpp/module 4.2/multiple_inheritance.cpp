#include <iostream>
using namespace std;
class Person
{
    int age;
    string name;

public:
    void setPerson(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    void getPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};
class student : public Person
{
    float percentage;

public:
    void setStudent(float percentage)
    {
        this->percentage = percentage;
    }
    void getStudent()
    {
        cout << "percentage is: " << percentage << endl;
    }
};
class Teacher : public Person
{
    float salary;

public:
    void setTeacher(float salary)
    {
        this->salary = salary;
    }
    void getTercher()
    {
        cout << "salary: " << salary << endl;
    }
};

int main()
{
    student s1;
    s1.setPerson(20, "rajkumar");
    s1.getPerson();
    s1.setStudent(70);
    s1.getStudent();
    Teacher t1;
    t1.setTeacher(15000);
    t1.getTercher();
    return 0;
}