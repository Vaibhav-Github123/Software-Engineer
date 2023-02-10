#include <stdio.h>

int main()
{
    int n = 1532, sum = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n /= 10;
    }
    printf("sum of individual digits are %d", sum);
    return 0;
}