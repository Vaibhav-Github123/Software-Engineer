#include<stdio.h>
int main()
{
    int a;
    printf("enter any number\n");
    scanf("%d",&a);
    (a % 2 == 0) ? printf("given number is even") : printf("given number is odd");

    return 0;
}