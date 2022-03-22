#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    /* This program prints 3 variables previously settled and 1 read from the user input.*/
    char c = 'A';
    int i = 30;
    float f = 50.25;

    double d;



    printf("| Prints the following variables - char c, int i, float f:\n\n");
    printf("| Char: %c\n\n", c);
    printf("| Int: %d\n\n", i);
    printf("| Float: %.2f\n\n", f);

    printf("-----------------------------------------------------------\n");
    printf("Hello world!\n ");


    printf("Please, enter a number (can be a float one): ");
    scanf("%lf", &d);
    printf("\n The number you entered was: %lf",d);
}
