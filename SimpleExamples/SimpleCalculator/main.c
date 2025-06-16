#include <stdio.h>
#include <conio.h>

int main()
{
    int x_1, x_2;
    printf("Enter numbers = \n");
    scanf("%d %d", &x_1, &x_2);

    int sum = x_1 + x_2;
    printf("Sum = %d\n", sum);

    double sub = x_1 - x_2;
    printf("Substracion = %.2f\n", sub);

    int multi = x_1 * x_2;
    printf("Multiplication = %d\n", multi);

    double divide = x_1 / x_2;
    printf("Divide = %.2f\n", divide);

    getch();
    return 0;
}
