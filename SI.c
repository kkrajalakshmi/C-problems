#include <stdio.h>

int main()
{
    int principal;
    int n;
    float r;
    int SI;
    printf("Enter the main_salary :\n");
    scanf("%d",&principal);
    printf("Enter the no of days :\n");
    scanf("%d",&n);
    printf("Enter the rate of interest :\n");
    scanf("%f",&r);
    SI=(principal*n*r)/100;
    printf("The Simple  interest is: %f",SI);
    return 0;
}
