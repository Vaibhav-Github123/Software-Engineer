#include <stdio.h>
int main()
{

  int year=2020;
  // int year;
  // printf("enter the year\n");
  // scanf("%d", &year);

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
  {
    printf("year is leap year");
  }
  else
  {
    printf("year is not leap year");
  }

  
  
  
  
  
  
  
  // or
  

  // if (year % 4 == 0)
  // {
  //   printf("year is leap year");
  // }
  // else if (year % 100 == 0)
  // {
  //   printf("year is not a leap year");
  // }
  // else if (year % 400 == 0)
  // {
  //   printf("year is leap year");
  // }
  // else
  // {
  //   printf("year is not leap year");
  // }

  return 0;
}
