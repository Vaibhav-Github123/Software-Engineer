#include <stdio.h>

void mul()
{
    int i, j, k, r1, c1, r2, c2;

    printf("enter matrix A row & column\n");
    scanf("%d%d", &r1, &c1);
    printf("enter matrix B row & column\n");
    scanf("%d%d", &r2, &c2);
    if (c1 == r2)
    {

        printf("\nenter matrix A element\n");
        int a[10][10];
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("\nmatrix A is\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        printf("\nenter matrix B element\n");
        int b[10][10];
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("\nmatrix B is\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
        printf("\nthe multiplication of both matrix is :\n");
        int c[10][10];

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < c1; k++)

                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }

                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nmultiplication is not posible");
    }
}
int main()
{
    mul();
    return 0;
}