#include <stdio.h>
int main()
{
    // int rem,r,n;
    // printf("enter the value\n");
    // scanf("%d",&n);

    int rem, r, n = 1234;

    r = n % 10;

    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
    }

    printf("the sum of number is %d", rem + r);

    return 0;
}