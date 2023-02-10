#include <stdio.h>
int main()
{
    int i, num;
    int a[5] = {36, 766, 5, 86, 57};
    int max = a[0];

    for (i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("the max value is %d ", max);

    return 0;
}


