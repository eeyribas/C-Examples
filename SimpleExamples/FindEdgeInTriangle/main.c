#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b;
    double tri_edge, tri;
    do{
        printf("a Edge = ");
        scanf("%d", &a);
        printf("b Edge = ");
        scanf("%d", &b);
        tri_edge = (a * a) + (b * b);
        tri = sqrt(tri_edge);
        printf("\n\nEdge = %.2f\n\n", tri);
    } while((a != 0) && (b != 0));

    getch();
    return 0;
}
