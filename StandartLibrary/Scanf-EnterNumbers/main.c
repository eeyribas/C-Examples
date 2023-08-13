#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y;
    printf("Enter numbers = \n");
    scanf("%d %d", &x, &y);

    for(int i = 1; i <= y; i++){
        for(int j = 1; j <= x; j++)
            printf("@");
        printf("\n");
    }

    getch();
    return 0;
}
