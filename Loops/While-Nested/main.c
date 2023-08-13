#include <stdio.h>
#include <conio.h>

int main()
{
    int row = 10, col;

    while (row >= 1){
        col = 1;
        while (col <= 10){
            printf("%s", row % 2 ? "<" : ">");
            ++col;
        }
        --row;
        printf("\n");
    }

    getch();
    return 0;
}
