

#include <stdio.h>

int main ()
{
  char full_name[15];



  printf("Enter the full name :\n");
  scanf("%s",full_name);

  printf ("The abbreviated name is %c\t%c", full_name[0],full_name[4]);

  return 0;
}
