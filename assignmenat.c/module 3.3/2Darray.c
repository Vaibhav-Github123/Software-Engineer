#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2], r1, c1, r2, c2, r3, c3, i, j, k, sum;
    printf("Enter no. of row and colume of matrix A\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter element into matrix A\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Enter no. of row and colume of matrix B\n");
    scanf("%d %d", &r2, &c2);
    printf("Enter element into matrix B\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    if (c1 != r2)
    {
        printf("matrix multiplication not found\n");
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            sum = 0;
            for (k = 0; k < c1; k++)
            {
                sum = sum + a[i][k] * b[k][j];
                c[i][j] = sum;
            }
        }
    }
    printf("\n multiplication of matrix is :\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}