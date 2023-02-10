#include <stdio.h>
int main()
{
    float r=10,b=5,h=3,l=8,l1=10,a,a1,a2;
    a=3.14*r*r;
    a1=b*h;
    a2=0.5*3.14*r*r;
    printf("the area of circle is %.2f\n",a);
    printf("the area of rectangle is %.2f\n",a1);
    printf("the area of triangle is %.2f\n",a2);

    // or
    //  for circle area

    // float r, a;
    // printf("enter the radius of circle\n");
    // scanf("%f", &r);
    // a = 3.14 * r * r;
    // printf("the area of circle is %.2f", a);

    // for rectangle area

    //  float b,l,a1;
    //  printf("enter the length of rectangle\n");
    //  scanf("%f",&l);
    //  printf("enter the width of rectangle\n");
    //  scanf("%f",&b);
    //  a1=l*b;
    // printf("the area of rectangle is %.2f", a1);

    // for triangle area

    // float r, a2;
    // printf("enter the radius of triangle\n");
    // scanf("%f", &r);
    // a2 = 0.5 * 3.14 * r * r;
    // printf("the area of triangle is %.2f", a2);

    return 0;
}