
#include <stdio.h>

int main ()
{

  float celsius;
  float Fahrenheit;
  printf("Enter the celsius :\n");
  scanf("%f",&celsius);

  Fahrenheit = (celsius * 1.8)+32;
  printf ("The Fahrenheit is %f", Fahrenheit);

  return 0;
}
