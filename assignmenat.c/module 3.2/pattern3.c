/*A
  B C
  D E F
  G H I J
  K L M N O */

#include <stdio.h>

int main()
{
    char i, j, n = 'A';
    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = 'A'; j <= i; j++)
        {
            printf("%c ", n++);
        }
        printf("\n");
    }

    return 0;
}