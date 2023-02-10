#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, p = 15;
    printf(" %d %d ", a, b);
    for (int i = 2; i <= p; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}