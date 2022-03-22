#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* This program reads an integer input number from the user
    and shows 'n' pair numbers starting from 1. Ex.: input - 3 --> 2, 4, 6.*/

    int input;

    printf("Enter with an integer input: ");
    scanf("%d", &input);
    printf("\n");
    for(int i = 1; i <= input; i++){

        printf("%d\n", 2*i);

    }


    return 0;
}
