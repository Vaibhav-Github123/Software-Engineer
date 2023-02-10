#include<stdio.h>
int main()
{
    // int n,rem;
    // printf("enter any number");
    // scanf("%d",&n);

    int n=64728,rem;

    while (n!=0)
    {
        rem = n % 10;
        printf("%d",rem);
        n=n/10;
    }

    return 0;
}