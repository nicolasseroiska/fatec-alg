#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valor, dolar;
    printf("Entre com um valor em reais: ");
    scanf("%lf", &valor);
    printf("\nO valor lido foi R$%.2lf", valor);

    printf("\nEntre com o cambio do dolar: ");
    scanf("%lf", &dolar);
    printf("\nO valor lido foi R$%.2lf", dolar);

    printf("\n------------------------------");
    printf("\nEsse valor em usd eh: $%.2lf  |", valor/dolar);
    printf("\n------------------------------");
}
