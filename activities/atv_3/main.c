#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*This program reads an input value in reais and then convert it to dolar*/

    double valor, dolar;

    printf("Enter with a brl input: ");
    scanf("%lf", &valor);
    printf("\nThe read value was R$%.2lf", valor);

    printf("\nEnter with the dolar's currency exchange: ");
    scanf("%lf", &dolar);
    printf("\nThe read value was %.2lf", dolar);

    printf("\n------------------------------");
    printf("\nThe read brl input in usd is: $%.2lf  |", valor/dolar);
    printf("\n------------------------------");
}
