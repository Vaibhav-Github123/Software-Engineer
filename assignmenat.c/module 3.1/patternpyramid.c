#include <stdio.h>
int main()
{
    int i, j, k, num;
    printf("enter row: \n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (k = num; k > i; k--)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}