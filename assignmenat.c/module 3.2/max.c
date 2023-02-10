#include <stdio.h>

int main()
{
    int rut, rem, max = 0;
    printf("enter the value:");
    scanf("%d", &rut);

    while (rut != 0)
    {
        rem = rut % 10;
        printf("\n rem=%d", rem);
        if (max < rem)
        {
            max = rem;
        }
        rut = rut / 10;
    }
    printf("\n max number is %d ", max);

    return 0;
}