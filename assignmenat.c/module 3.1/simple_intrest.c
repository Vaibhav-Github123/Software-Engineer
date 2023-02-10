#include<stdio.h>
int main()
{
    float p,r,n,w;
    printf("enter the value of p\n");
    scanf("%f",&p);
    printf("enter the value of r\n");
    scanf("%f",&r);
    printf("enter the value of n\n");
    scanf("%f",&n);
    w=(p*r*n)/100;
    printf("the simple intrest is %.2f",w);


   return 0;
}