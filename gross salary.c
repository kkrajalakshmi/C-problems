
#include <stdio.h>

int main()
{

    int main_income;
    int PF;
    int med_salary;
    int incentives;
    int gross_salary;

    printf("Enter the main_income :\n");
    scanf("%d",&main_income);
    printf("Enter the PF :\n");
    scanf("%d",&PF);
    printf("Enter the med_salary :\n");
    scanf("%d",&med_salary);
    printf("Enter the incentives :\n");
    scanf("%d",&incentives);



    gross_salary = main_income+PF+med_salary+incentives;
    printf("The gross_salary  is: %d",gross_salary);
    return 0;
}
