#include <stdio.h>
int main()
{
    char alphabet;
    char a = 'a';
    char e = 'e';
    char i = 'i';
    char o = 'o';
    char u = 'u';
    printf("enter a letter\n");
    scanf(" %c",&alphabet);
    if(alphabet=='a' && 'e' && 'i' && 'o' && 'u'){
        printf("The given letter is vowel");
    }
    else{
    printf("The given letter is consonent");
    }
    return 0;
}
