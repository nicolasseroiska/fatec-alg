#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* This program reads 2 variables from the user
    and then prints it's sum, subtraction, product and division.*/

    double result, x, y;

    printf("Enter with the integer number x: ");
    scanf("%lf", &x);
    printf("Enter with the integer number y: ");
    scanf("%lf", &y);

    result = x + y;
    printf("\nx + y = %lf\n", result);

    result = x - y;
    printf("x - y = %lf\n", result);

    result = x * y;
    printf("x * y = %lf\n", result);

    result = x / y;
    printf("x / y = %lf\n", result);

    return 0;
}
