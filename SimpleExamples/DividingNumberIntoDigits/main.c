#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Number = ");
    scanf("%d", &num);

    int a = num / 10000;
    int b = (num - (a * 10000)) / 1000;
    int c = (num - (a * 10000 + b * 1000)) / 100;
    int d = (num - (a * 10000 + b * 1000 + c * 100)) / 10;
    int e = (num - (a * 10000 + b * 1000 + c * 100 + d * 10)) / 1;
    printf("Output---> %d  %d  %d  %d  %d", a, b, c, d, e);

    getch();
    return 0;
}
