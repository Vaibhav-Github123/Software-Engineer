#include <stdio.h>

struct emp
{
    int empno;
    char empname[30];
    char add[20];
    int age;
};

int main()
{
    struct emp o1 = {101, "vaibhav", "surat", 24};
    struct emp o2 = {102, "ajit", "surat", 25};
    struct emp o3 = {103, "aakash", "surat", 34};
    struct emp o4 = {104, "amit", "surat", 65};
    struct emp o5 = {105, "ajay", "surat", 32};
    printf("%d %s %s %d\n", o1.empno, o1.empname, o1.add, o1.age);
    printf("%d %s %s %d\n", o2.empno, o2.empname, o2.add, o2.age);
    printf("%d %s %s %d\n", o3.empno, o3.empname, o3.add, o3.age);
    printf("%d %s %s %d\n", o4.empno, o4.empname, o4.add, o4.age);
    printf("%d %s %s %d\n", o5.empno, o5.empname, o5.add, o5.age);
    return 0;
}