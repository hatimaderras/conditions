#include <stdio.h>
int main ()
{
    float  Fahrenheit,Celsius;

    printf("entre la température en Fahrenheit:");
    scanf("%f",&Fahrenheit);


    Celsius=(Fahrenheit-32)/1.8;
    printf("la température en celsius:%.2f\n",Celsius);
    return 0;
}
