#include <stdio.h>
int main()
{
    int i, j,k, input;
    int a[2][2], b[2][2], c[2][2];

    printf("enter first matrix element\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("enter element [%d,%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nenter second matrix element\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("enter element [%d,%d] :", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nthe first matrix is: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nthe second matrix is: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("enter input 1 for addition\n");
    printf("enter input 2 for subtraction\n");
    printf("enter input 3 for multiplication\n");
    scanf("%d",&input);
    printf("\n\n");
    switch (input)
    {
    case 1:
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        break;

    case 2:
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                c[i][j] = a[i][j] - b[i][j];
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        break;

        case 3:
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for ( k = 0; k < 2; k++)
                    {
                        c[i][j]=c[i][j] + a[i][j]*b[i][j];
                        printf("%d", c[i][j]);
                    }
                    
                    
                }
                printf("\n");
            }
            break;

    default:
        printf("plz enter valid option");
        break;
    }

    return 0;
}