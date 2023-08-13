#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("Number: ");
    scanf( "%lf", &x);

    printf("\n\nOriginal %lf", x);
    printf("\nCeil: %lf", ceil(x));
    printf("\nFloor: %lf", floor(x));

    if(x >= 0)
        printf("\nSquart %lf", sqrt(x) );
    else
        printf("\nNegative number" );
    printf("\nCosine: %lf\n", cos(x));

    getch();
    return(0);
}
