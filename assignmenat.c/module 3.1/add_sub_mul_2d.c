#include <stdio.h>

void add(int x, int y)
{
    printf("the sum of %d and %d is :%d\n", x, y, x + y);
}
void sub(int x, int y)
{
    printf("the subtraction of %d and %d is :%d\n", x, y, x - y);
}
void mul(int x, int y)
{
    printf("the multiplication of %d and %d is :%d\n", x, y, x * y);
}
void div(float x, float y)
{
    printf("the division of %.2f and %.2f is :%.2f\n", x, y, x / y);
}

int main()
{
    int enter, x, y;
    printf("enter any two number\n");
    scanf("%d%d", &x, &y);
    printf("enter 1 for addition\n");
    printf("enter 2 for subtraction\n");
    printf("enter 3 for multiplication\n");
    printf("enter 4 for division\n");

    scanf("%d", &enter);

    switch (enter)
    {
    case 1:
        add(x, y);
        break;

    case 2:
        sub(x, y);
        break;

    case 3:
        mul(x, y);
        break;

    case 4:
        div(x, y);
        break;

    default:
        printf("enter valid option\n");
        break;
    }

    return 0;
}