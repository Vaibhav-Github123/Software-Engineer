#include <stdio.h>

int main()
{
    char va;
    printf("enter any alphabet :\n");
    scanf("%c", &va);

    switch (va)
    {
    case 'a':
        printf("%c is a vowel", va);
        break;
    case 'e':
        printf("%c is a vowel", va);
        break;
    case 'i':
        printf("%c is a vowel", va);
        break;
    case 'o':
        printf("%c is a vowel", va);
        break;
    case 'u':
        printf("%c is a vowel", va);
        break;
    case 'A':
        printf("%c is a vowel", va);
        break;
    case 'E':
        printf("%c is a vowel", va);
        break;
    case 'I':
        printf("%c is a vowel", va);
        break;
    case 'O':
        printf("%c is a vowel", va);
        break;
    case 'U':
        printf("%c is a vowel", va);
        break;

    default:
        printf("%c is a consonant", va);
        break;
    }
    return 0;
}