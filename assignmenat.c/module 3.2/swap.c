#include <stdio.h>

int main()
{
    int a = 8, b = 9;
    printf("value of a before swapping is %d\n", a);
    printf("value of b before swapping is %d\n", b);

    // without using third variable
    a = a + b; // 11
    b = a - b; // 5
    a = a - b; // 6

    // a = a * b; // 30
    // b = a / b; // 5
    // a = a / b; // 6

    // XOR operator
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    printf("value of a before swapping is %d\n", a);
    printf("value of b before swapping is %d\n", b);

    return 0;
}