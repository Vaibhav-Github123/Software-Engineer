#include <stdio.h>
struct Emp
{
    int id;
    char name[10];
    float sal;
};
union emp
{
    int id;
    char name;
    float sal;
};
int main()
{
    printf("size of structure is %d\n", sizeof(struct Emp));
    printf("size of union is %d\n", sizeof(union emp));
    return 0;
}