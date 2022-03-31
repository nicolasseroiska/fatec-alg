#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        This program reads n integer input numbers and inform if the read numbers are in ascending order
    */

    int n_to_read, prev_number, cur_number, test;

    printf("Enter with the quantity of numbers you want us to read: ");
    scanf("%d", &n_to_read);

    printf("\nEnter with the value 1: ");
    scanf("%d", &cur_number);

    test = 1;

    if(n_to_read > 1){

        for(int i = 2; i <= n_to_read; i++){

            printf("\nEnter with the value %d: ", i);
            prev_number = cur_number;
            scanf("%d", &cur_number);

            if( prev_number > cur_number){
                test = 0;
            }
        }
    }

    if(test == 0)
        printf("\nIt's not in ascending order\n");

    else
        printf("\nIt's in ascending order\n");
}
