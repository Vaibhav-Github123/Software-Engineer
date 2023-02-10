#include <stdio.h>
void factorial(int num)
{
    int fact = 1, i;
    printf("enter any number for factorial\n");
    scanf("%d", &num);
    for (i = num; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("\nthe factorial of %d is %d\n", num, fact);
}

int main()
{
    int num;
    factorial(num);
    return 0;
}