#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, option;
    printf("select option 1 for sunay\n", a);
    printf("select option 2 for monday\n", b);
    printf("select option 3 for thesday\n", c);
    printf("select option 4 for wednesday\n", d);
    printf("select option 5 for thursday\n", e);
    printf("select option 6 for friday\n", f);
    printf("select option 7 for saturday\n", g);
    printf("plesase select any one option: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("today is sunday\n", a);
        break;
    case 2:
        printf("today is monday\n", b);
        break;
    case 3:
        printf("today is thesday\n", c);
        break;
    case 4:
        printf("today is wednesday\n", d);
        break;
    case 5:
        printf("today is thursday\n", e);
        break;
    case 6:
        printf("today is friday\n", f);
        break;
    case 7:
        printf("today is sturday\n", g);
        break;

    default:
        printf("please enter valid option");
        break;
    }
    return 0;
}