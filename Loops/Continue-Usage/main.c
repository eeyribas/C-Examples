#include <stdio.h>
#include <conio.h>

int main()
{
    for (int i = 1; i <= 10; i++) {
        if (i == 5)
            continue;
        printf("%d\n", i);
    }
    printf("\nContinue...\n");

    getch();
    return 0;
}
