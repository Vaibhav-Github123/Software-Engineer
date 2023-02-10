#include <stdio.h>
int main()
{
    int a = 9, b = 6, option;
    printf("select option 1 for Addition\n");
    printf("select option 2 for subtraction\n");
    printf("select option 3 for multiplication\n");
    printf("select option 4 for division\n");
    printf("please select any one option: ");
    scanf("%d ", &option);

    switch (option)
    {
    case 1:
        printf("Addition of %d and %d is %d", a, b, a + b);
        break;
    case 2:
        printf("subtraction of %d and %d is %d", a, b, a - b);
        break;
    case 3:
        printf("multiplication of %d and %d is %d", a, b, a * b);
        break;
    case 4:
        printf("division of %d and %d is %d", a, b, a / b);
        break;

    default:
        printf("please enter valid option");
        break;
    }
    return 0;
}