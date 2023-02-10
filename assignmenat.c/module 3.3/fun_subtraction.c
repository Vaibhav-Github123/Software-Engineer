#include <stdio.h>
void subtraction(int a, int b)
{
    printf("subtraction of %d and %d is %d\n", a, b, a - b);
}
int main()
{
    subtraction(15, 9);
    return 0;
}