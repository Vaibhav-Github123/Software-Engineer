#include<stdio.h>
int main()
{
    char alp;
    printf("enter any alphabet to find vowel or consonent\n");
    scanf("%c",&alp);

    switch (alp)
    {
    case 'a':
        printf("the alphabet you enter is vowel");
        break;

    case 'e':
        printf("the alphabet you enter is vowel");
        break;

    case 'i':
        printf("the alphabet you enter is vowel");
        break;

    case 'o':
        printf("the alphabet you enter is vowel");
        break;

    case 'u':
        printf("the alphabet you enter is vowel");
        break;

    case 'A':
        printf("the alphabet you enter is vowel");
        break;

    case 'E':
        printf("the alphabet you enter is vowel");
        break;

    case 'I':
        printf("the alphabet you enter is vowel");
        break;

    case 'O':
        printf("the alphabet you enter is vowel");
        break;

    case 'U':
        printf("the alphabet you enter is vowel");
        break;

    // case 'a':
    // case 'e':
    // case 'i':
    // case 'o':
    // case 'u':
    // case 'A':
    // case 'E':
    // case 'I':
    // case 'O':
    // case 'U':
    //          printf("the alphabet you enter is vowel");
    //          break;

    default:
        printf("the alphabrt you enter is consonent");
        break;
    }

    return 0;
}