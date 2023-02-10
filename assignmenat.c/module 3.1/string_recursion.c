#include <stdio.h>

void rec(char s[])
{
    int i, count = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("the string length is %d\n", count);
    for (i = count - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}
int main()
{
    rec("ashok");
    return 0;
}