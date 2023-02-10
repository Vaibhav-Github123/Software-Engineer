#include <stdio.h>

int main()
{
    int n = 18659, even = 0, rem, odd = 0;
    while (n != 0)
    {
        rem = n % 10;
        if (rem % 2 == 0)
        {
            even = even + rem;
        }
        else
        {
            odd = odd + rem;
        }
        n /= 10;
    }
    printf("sum of even digits are %d\n", even);
    printf("sum of odd digits are %d\n", odd);
    return 0;
}