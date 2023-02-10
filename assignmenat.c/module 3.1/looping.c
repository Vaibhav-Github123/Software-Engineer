#include <stdio.h>
int main()
{
    int num, i, odd = 0, even = 0, counte = 0, counto = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("enter number %d :", i);
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            even = even + num;
            counte++;
        }
        else
        {

            odd = odd + num;
            counto++;
        }
    }

    printf("there is %d even number and sum even number is : %d\n", counte, even);
    printf("there is %d odd number and sum of odd number is : %d\n", counto, odd);

    return 0;
}