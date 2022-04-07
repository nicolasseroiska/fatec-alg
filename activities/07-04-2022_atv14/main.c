#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*This program prints all possible bets for Mega-Sena*/

    for(int i = 1; i <= 7; i++)
        for(int j = i; j <= 7; j++)
            for(int k = j; k <= 7; k++)
                for(int l = k; l <= 7; l++)
                    for(int m = l; m <= 7; m++)
                        for(int n = m; n <= 7; n++)
                            if((i != j) && (i != k) && (i != l) && (i != m) && (i != n) && (j != k) &&
                               (j != l) && (j != m) && (j != n) && (k != l) && (k != m) && (k != n) &&
                               (l != m) && (l != n) && (m != n))
                                printf("%d %d %d %d %d %d\n", i, j, k, l, m, n);



    return 0;
}
