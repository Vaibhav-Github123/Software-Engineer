#include <stdio.h>
int main()
{
    int i, count = 0;
    char s[20] = "hello world";
    for (i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d", count);

    return 0;
}