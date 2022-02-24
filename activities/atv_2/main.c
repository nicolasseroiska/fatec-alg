#include <stdio.h>
#include <stdlib.h>

int main()
{
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
