#include <stdio.h>
#include <stdlib.h>

int main()
{
    double transaction, broker_comission;

    printf("Please, enter with the transaction's value: ");
    scanf("%lf", &transaction);

    if(transaction > 500000)
        broker_comission = 255 + transaction*(0.09/100);

    else if(transaction > 50000)
        broker_comission = 155 + transaction*(0.11/100);

    else if(transaction > 20000)
        broker_comission = 100 + transaction*(0.22/100);

    else if(transaction > 6250)
        broker_comission = 76 + transaction*(0.34/100);

    else if(transaction > 2500)
        broker_comission = 56 + transaction*(0.66/100);

    else
        broker_comission = 30 + transaction*(1.7/100);


    if(broker_comission < 39)
        broker_comission = 39;

    printf("The broker's comission is: %.5lf", broker_comission);

    return 0;
}
