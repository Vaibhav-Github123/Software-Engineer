#include <stdio.h>

int main()
{
    int p, fact = 1, l;
    printf("enter the value");
    scanf("%d", &l);
    for (p = l; p >= 1; p--)
    {
        fact = fact * p;
    }
    printf("factorial of %d is %d", l, fact);
    return 0;
}