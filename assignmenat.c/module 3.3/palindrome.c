#include <stdio.h>

int main()
{
    int s1[50], s2[50];
    printf("Enter the string : ");
    gets(s1);
    strcpy(s2, s1);
    strrev(s2);
    if (!strcmp(s1, s2))
    {
        printf("string is palindeome");
    }
    else
    {
        printf("string is not palindrome");
    }
    return 0;
}