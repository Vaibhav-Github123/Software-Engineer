#include <stdio.h>

int main()
{
    int n = 1234, sum = 0, rem, r;
    r = n % 10;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
    }
    printf("sum of first and last digits are %d", rem + r);
    return 0;
}