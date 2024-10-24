#include <stdio.h>
int main ()
{
    int choice;

    printf("chose your options:\n");
    printf("1.to convert from one year to month\n");
    printf("2.to convert from one year to days\n");
    printf("3.to convert from one year to hours\n");
    printf("4.to convert from one year to minute\n");
    printf("5.to convert from one year to secound\n");

    printf("enter your option:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("one yeur=12 month");
        break;
        case 2:
        printf("one yeur=365 days");
        break;
        case 3:
        printf("one yeur=8760 hours");
        break;
        case 4:
        printf("one yeur=525600 minutes");
        break;
        case 5:
        printf("one yeur=31536000 secoundes");
        break;

        default:
            printf("inavile choce enter a numero btzen 1 and 5");

    }
    return 0;

}
