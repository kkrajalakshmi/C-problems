#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age :");
    scanf("%d",&age);
    if(age>=18 && age<=100)
    {
        printf("eligible");
    }

    else
    {
        printf("not eligible");
    }

    return 0;
}
