#include <stdio.h>
struct Emp
{
    int id;
    float sal;
};
int main()
{
    struct Emp e[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the id of employee number %d: \n", i + 1);
        scanf("%d", &e[i].id);
        printf("Enter the salary of employee number %d: \n", i + 1);
        scanf("%f", &e[i].sal);
    }

    printf("\n\n------------------------\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("id of employee number %d is %d\n", i + 1, e[i].id);
        printf("sal of employee number %d is %.2f\n", i + 1, e[i].sal);
    }

    return 0;
}