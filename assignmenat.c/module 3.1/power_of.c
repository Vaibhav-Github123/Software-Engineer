#include <stdio.h>
int main()
{
    int b, p, res = 1;
    printf("enter the value of base : ");
    scanf("%d", &b);
    printf("enter the value of power : ");
    scanf("%d", &p);
    int temp=p;
    while (p != 0)
    {
        res = res * b;
        p--;
    }
    printf("%d ^ %d = %d", b, temp, res);
    return 0;
}
