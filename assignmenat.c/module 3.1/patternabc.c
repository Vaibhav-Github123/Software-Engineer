// A         
// B C       
// D E F     
// G H I J   
// K L M N O

#include <stdio.h>
int main()
{
    int i, j, num;
    char A = 'A';
    printf("enter row:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", A++);
        }
        printf("\n");
    }

    return 0;
}