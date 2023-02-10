#include <stdio.h>

void addsub()
{
    int i, j, n;
    int a[10][10];
    int b[10][10];
    printf("enter matrix size\n");
    scanf("%d", &n);
    printf("\nenter matrix A element\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nmatrix A is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nenter matrix B element\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nmatrix B is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\nthe addition of both matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    printf("\nthe subtraction of both matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j] - b[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    addsub();
    return 0;
}