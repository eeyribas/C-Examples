#include <stdio.h>
#include <conio.h>

int main()
{
    int number, a = 100, sum = 0;
    printf("How many numbers do you want = ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++)
        sum += a * i;
    printf("\nSum=%d", sum);

    getch();
    return 0;
}
