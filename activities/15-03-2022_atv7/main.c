#include <stdio.h>
#include <stdlib.h>

int main()
{
    char entered_char;

    printf("Enter with a char ('s' for square; 'r' for rectangle; 'c' for circle.):");
    scanf("%c", &entered_char);

    if(entered_char == 's'){
        double side;
        printf("Please, enter with the square's side: ");
        scanf("%lf", &side);
        printf("The square's area is: %.2lf", side*side);
    }

    else if(entered_char == 'r'){
        double width, length;

        printf("Please, enter with the rectangle's width: ");
        scanf("%lf", &width);

        printf("Please, enter with the rectangle's length: ");
        scanf("%lf", &length);

        printf("The rectangle's area is: %.2lf", width*length);
    }

    else if(entered_char == 'c'){
        double radious;
        printf("We're considering PI as 3.14");
        printf("\nPlease, enter with the circle's radious: ");
        scanf("%lf", &radious);
        printf("The circle's area is: %.2lf", radious*radious*3.14);
    }

    else{
        printf("Invalid input. Please re-run the program.");
    }

}
