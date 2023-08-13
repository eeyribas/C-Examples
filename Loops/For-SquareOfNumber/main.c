#include <stdio.h>
#include <conio.h>

int Square(int);

int main()
{
    for(int x = 1; x <= 10; x++){
        printf("%d", Square(x));
        printf("\n");
    }

    getch();
    return 0;
}

int Square(int a)
{
    return a * a;
}
