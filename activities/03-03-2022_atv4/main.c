#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*This program calculates a salesman comission amount*/

    int salesman_code;
    float sell_amount;
    float commission_percentage;

    printf("Please, enter the salesman code: ");
    scanf("%d", &salesman_code);

    printf("How much did you sell ($)?\n");
    scanf("%f", &sell_amount);

    printf("What's the sell percentage(%) you receive as commission?\n");
    scanf("%f", &commission_percentage);

    printf("The commission amount that %d salesman will receive is: %f", salesman_code, sell_amount*commission_percentage/100);


    return 0;
}
