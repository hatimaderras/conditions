#include <stdio.h>
int main ()
{
    int number;
    printf("enter your number :");
    scanf("%d",&number);

    if (number>0){
        printf("your number is positif");
    } else if (number<0){
        printf("your number is negatif");
    } else printf("your number egal 0");
    return 0;
    }
