#include <stdio.h>
#include <conio.h>

int main()
{
    int x = 1, y = 4;
    if(--y == 3 && !(x++ <= 1))
        printf("A\n");
    printf("B\n");

    if(-!!x)
        printf("C\n");

    getch();
    return 0;
}
