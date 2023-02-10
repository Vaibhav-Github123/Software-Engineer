#include <stdio.h>
int main()
{
    int day, year;
    printf("enter the days to convert into year\n");
    scanf("%d", &day);
    year = day / 365;
    printf("%d days equal to %d year\n", day, year);

    return 0;
}