#include <stdio.h>

int main()
{
    int alphabet;
    printf("enter the alphabet :");
    scanf("%d",&alphabet);

    if(alphabet>=65 && alphabet<=122)
    {
        printf("It is an alphabet");
    }

    else
    {
        printf("It is not an alphabet");
    }


    return 0;
}
