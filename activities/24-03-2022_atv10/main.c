#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*This program prints 2 to the power of N, starting printing power 0 and going until N.
    N is a variable that will be inputed by the user.*/

    double n;
    double aux;

    printf("Enter with an integer number of results of powers you want to know(starting from 0): ");
    scanf("%lf", &n);

    printf("\n");
    for(int i = 0; i <= n; i++){
        aux = 1;

        for(int j = 1; j <= i; j++)
            aux *= 2;


        printf("2 ^ %d = %d\n", i, aux);

    }

    return 0;
}
