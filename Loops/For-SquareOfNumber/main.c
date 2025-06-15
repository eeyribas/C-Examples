#include <stdio.h>
#include <conio.h>

int Square(int);

int main()
{
    for (int i = 1; i <= 10; i++) {
        printf("%d", Square(i));
        printf("\n");
    }

    getch();
    return 0;
}

int Square(int value)
{
    return value * value;
}
