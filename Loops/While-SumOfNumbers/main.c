#include <stdio.h>
#include <conio.h>

int main()
{
    int x = 1, y, sum = 0;
    while (x <= 10) {
        y = x * x;
        printf("%d\n", y);
        sum += y;
        ++x;
    }
    printf("Sum = %d\n", sum);

    getch();
    return 0;
}
