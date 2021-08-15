#include <stdio.h>

int main ()
{
  int h,b;
  float area;

  printf("Enter the hiegth :\n");
  scanf("%d",&h);
   printf("Enter the breadth :\n");
  scanf("%d",&b);
  area=(h*b)/2;

  printf ("The area of Triangle is %f", area);

  return 0;
}
