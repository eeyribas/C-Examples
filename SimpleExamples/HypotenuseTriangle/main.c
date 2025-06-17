#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    double hypotenuse, hypotenuse_edge;
    int a, b;
    do {
        printf("a Edge = ");
        scanf("%d", &a);
        printf("b Edge = ");
        scanf("%d", &b);
        hypotenuse_edge = (a * a) + (b * b);
        hypotenuse = sqrt(hypotenuse_edge);
        printf("\n\nEdge = %.2f\n\n", hypotenuse);
    } while ((a != 0) && (b != 0));

    getch();
    return 0;
}
