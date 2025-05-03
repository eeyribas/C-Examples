#include <stdio.h>
#include <conio.h>

int main()
{
    int counter = 1;
    do {
        printf("%d\n", counter);
    } while(++counter <= 10);

    getch();
    return 0;
}
