#include <stdio.h>
#include <string.h>

int main()
{
    int i, flag = 0;
    char s[100] = "hello world dlrow olleh";
    int l = strlen(s);
    for (i = 0; i < l; i++)
    {
        if (s[i] != s[l - i - 1])
        {
            flag = 1;
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

    return 0;
}