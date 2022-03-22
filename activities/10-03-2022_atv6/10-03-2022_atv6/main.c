#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*This program puts 3 number in ascending order.*/

    double number1, number2, number3;

    printf("Enter with the 1st number: ");
    scanf("%lf", &number1);

    printf("Enter with the 2nd number: ");
    scanf("%lf", &number2);

    printf("Enter with the 3rd number: ");
    scanf("%lf", &number3);

    if((number1 < number2) && (number1 < number3))){
        printf("%.2lf", number1);

        if(number2 < number3){
            printf("%.2lf", number2);
            printf("%.2lf", number3);
        }

        else{
            printf("%.2lf", number3);
            printf("%.2lf", number2);
        }


    }
    else if((number2 < number1) && (number2 < number3))){
        printf("%.2lf", number2);

        if(number1 < number3){
            printf("%.2lf", number1);
            printf("%.2lf", number3);
        }

        else{
            printf("%.2lf", number3);
            printf("%.2lf", number1);
        }

    }
    else{
        printf("%.2lf", number3);

        if(number1 < number2){
            printf("%.2lf", number1);
            printf("%.2lf", number2);
        }

        else{
            printf("%.2lf", number2);
            printf("%.2lf", number1);
        }

    }

}
