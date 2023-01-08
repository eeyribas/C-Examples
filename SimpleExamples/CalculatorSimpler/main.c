#include<stdio.h>
#include<conio.h>

int main()
{
    int s_1, s_2;
    printf("Enter numbers = \n");
    scanf("%d %d", &s_1, &s_2);

    int sum = s_1 + s_2;
    printf("Sum = %d\n", sum);

    double sub = s_1 - s_2;
    printf("Substracion = %.2f\n", sub);

    int multi = s_1 * s_2;
    printf("Multi = %d\n", multi);

    double divide = s_1 / s_2;
    printf("Divide = %.2f\n", divide);

    getch();
    return 0;
}
