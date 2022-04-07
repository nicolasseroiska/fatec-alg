#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* This program prints n numbers of the Fibonacci sequence, starting from 1.*/

    int n, aux1, aux2, act;

    printf("Enter with the quantity of Fibonacci numbers you want to print: ");
    scanf("%d", &n);
    printf("\n");
    aux1 = 1; aux2 = 1; act = 0;

    for(int i = 0; i <= n; i++){
        printf("%d ", act);

        aux2 = aux1;
        aux1 = act;
        act += aux2;
    }

}
