#include<stdio.h>
#include<conio.h>

int main()
{
    int s1, s2;
    printf("Enter numbers = \n");
    scanf("%d %d", &s1, &s2);

    int sum = s1 + s2;
    printf("Sum = %d\n", sum);

    double sub = s1 - s2;
    printf("Substracion = %.2f\n", sub);

    int multi = s1 * s2;
    printf("Multi = %d\n", multi);

    double divide = s1 / s2;
    printf("Divide = %.2f\n", divide);

    getch();
    return 0;
}
