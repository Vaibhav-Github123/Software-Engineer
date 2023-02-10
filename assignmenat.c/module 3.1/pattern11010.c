// 1         
// 1 0       
// 1 0 1     
// 1 0 1 0   
// 1 0 1 0 1 

#include <stdio.h>
int main()
{
    int i, j, m = 1, num;
    printf("enter row:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 != 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}