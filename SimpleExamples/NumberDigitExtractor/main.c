#include <stdio.h>
#include <conio.h>

int main()
{
    int number;
    printf("Number = ");
    scanf("%d", &number);

    int a = number / 10000;
    int b = (number - (a * 10000)) / 1000;
    int c = (number - (a * 10000 + b * 1000)) / 100;
    int d = (number - (a * 10000 + b * 1000 + c * 100)) / 10;
    int e = (number - (a * 10000 + b * 1000 + c * 100 + d * 10)) / 1;
    printf("Output---> %d  %d  %d  %d  %d", a, b, c, d, e);

    getch();
    return 0;
}
