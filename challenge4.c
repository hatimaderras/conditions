#include <stdio.h>
int main ()
{
    int a,b, sum,triple;
    printf("entre the first number:\n");
    scanf("%d",&a);
    printf("enter the second number:\n");
    scanf("%d",&b);
    sum=a+b;

    if (a==b){
        printf("triple to thier sum:\n%d",sum*3);
    } else {
        printf("thier sum:\n%d",sum);
        }
    return 0;

}
