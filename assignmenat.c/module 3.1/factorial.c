#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("enter number for factorial \n");
    scanf("%d",&num);

    // int num=5,fact=1;

    while (num>0)
    {
        fact=fact*num;
        num--;
    }
    printf("the factorial of given number is %d",fact);
    
    return 0;
}