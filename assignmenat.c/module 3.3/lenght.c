#include <stdio.h>
int main()
{
    int i, count = 0;
    char s[20] = "tops technologies";
    for (i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("the length of a string is %d", count);

    return 0;
}
