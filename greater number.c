
#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("Enter the value of x :");
    scanf("%d",&x);

    printf("Enter the value of y :");
    scanf("%d",&y);

    printf("Enter the value of z :");
    scanf("%d",&z);

    if(x>y && x>z)
    {
         printf("x is greater");
    }

    else if(y>x && y>z)
    {
        printf("y is greater");
    }

    else
    {
        printf("z is greater");
    }


    return 0;
}
