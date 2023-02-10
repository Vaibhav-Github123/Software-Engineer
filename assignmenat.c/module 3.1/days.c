#include<stdio.h>
int main()
{
    int day;

    printf("enter 1 for first day of week\n");
    printf("enter 2 for second day of week\n");
    printf("enter 3 for third day of week\n");
    printf("enter 4 for forth day of week\n");
    printf("enter 5 for fifth day of week\n");
    printf("enter 6 for sixth day of week\n");
    printf("enter 7 for seventh day of week\n");

    scanf("%d",&day);

    switch (day)
    {
        case 1 :
        printf("the first day of week is monday");
        break;

        case 2 :
        printf("the second day of week is tuesday");
        break;

        case 3 :
        printf("the third day of week is wednesday");
        break;

        case 4 :
        printf("thr fourth day of week is thursday");
        break;

        case 5 :
        printf("the fifth day of week is friday");
        break;

        case 6 :
        printf("the sixth day of week is saturday");
        break;

        case 7 :
        printf("the seventh day of week is sunday");
        break;

        default :
        printf("please enter the correct value");
        break;
    }    


    return 0;
}