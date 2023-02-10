#include<stdio.h>
int main()
{
    
    // int num,max=0,rem;
    // printf("enter any number\n");
    // scanf("%d",&num);

    int num=1562,max=0,rem;

    while (num!=0)
    {
        rem=num%10;
        if (rem>=max)
        {
            max=rem;
        }
        num=num/10;
    }

    printf("the max number is %d\n",max);
    

    return 0;
}