#include <stdio.h>
#include <stdlib.h>

int main()
{
    //This program was made by Nicolas; it shows the biggest number entered by the user.

    double number1, number2, number3;

    printf("Enter with the 1st number: ");
    scanf("%lf", &number1);

    printf("Enter with the 2nd number: ");
    scanf("%lf", &number2);

    printf("Enter with the 3rd number: ");
    scanf("%lf", &number3);

    if((number1 > number2) && (number1 > number3)))
        printf("The biggest number is %.2lf", number1);


}
