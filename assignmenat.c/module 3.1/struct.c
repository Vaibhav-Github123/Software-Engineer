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
    printf("%d %s %s %d", o1.empno, o1.empname, o1.add, o1.age);
    return 0;
}