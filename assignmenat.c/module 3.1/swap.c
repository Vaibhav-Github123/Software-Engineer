#include<stdio.h>
int main()
{
    // int a=10,b=20;
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("before swap the value of a and b is %d %d \n",a,b);
    
    a=b-a;
    b=b-a;
    a=a+b;
    
    printf("after swap the value of a and b is %d %d",a,b);

    return 0;
}