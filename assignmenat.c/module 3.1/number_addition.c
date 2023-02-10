#include<stdio.h>
int main()
{
    // int n,sum=0,rem;
    // printf("enter the value\n");
    // scanf("%d",&n);

    int n=1523,sum=0,rem;

    while (n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("the sum of number is %d ",sum);
    
    return 0;
}