#include <stdio.h>
#include <math.h>
int main()
{

    int N;
    int frt;
    int sec;
    int thd;
    printf("Enter the integer number :\n");
    scanf("%d",&N);

    frt=pow(N,1);
    sec=pow(N,2);
    thd=pow(N,3);

    printf("The first is: %d\n",frt);
    printf("The second is: %d\n",sec);
    printf("The third is: %d\n",thd);
    return 0;
}

