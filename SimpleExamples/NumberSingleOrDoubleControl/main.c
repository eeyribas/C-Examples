#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    printf("\n");

    int control = fabs(number / 2) * 2;
    if (number == control)
        printf("Double");
    else
        printf("Single");

    getch();
    return 0;
}
