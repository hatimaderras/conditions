#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float s, z, r, decr;

    printf("Enter a (not a zero): ");
    scanf("%d", &a);
    if (a == 0) {
        printf("You can't put 0\n");
        return 1;
    }

    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);


    decr = (b * b) - (4 * a * c);


    s = -b / (2.0 * a);


    if (decr < 0) {
        printf("No real solution\n");
    }
    else if (decr == 0) {
        printf("Only one solution: %.2f\n", s);
    }
    else {

        z = (-b - sqrt(decr)) / (2.0 * a);
        r = (-b + sqrt(decr)) / (2.0 * a);
        printf("First solution: %.2f\n", z);
        printf("Second solution: %.2f\n", r);
    }

    return 0;
}
