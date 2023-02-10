#include <stdio.h>
#include <string.h>

void pel(char s[1000])
{
    int i, flag = 0;
    int l = strlen(s);
    for (i = 0; i < l; i++)
    {
        if (s[i] != s[l - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("string is pelindrome");
    }
    else
    {
        printf("string is not pelindrome");
    }
}

int main()
{
    pel("hello world");
    return 0;
}