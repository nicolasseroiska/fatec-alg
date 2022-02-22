#include <stdio.h>
#include <stdlib.h>

int main(void)
{
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
    if(1 < 2){
        printf("\nWe've entered the if's block:\n \n ");

        for(int i = 0; i <=10; i++)
        {
            printf("counting: %d \n ",i);
        }
    }

}
