#include <stdio.h>
int main()
{
    int i, num, tab;
    printf("enter number which you want to make table\n");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        tab = num * i;
        printf("%d * %d = %d\n", num,i,tab);
    }

    return 0;
}