#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*This program prints all possible combinations for 4 6-sided dies*/

    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <=6; j++){
            for(int k = 1; k <=6; k++){
                for(int l = 1; l <=6; l++)
                    printf("%d %d %d %d \n", i, j, k, l);
            }
        }
    }

    return 0;
}
