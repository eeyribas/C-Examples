#include <stdio.h>
#include <conio.h>

int main()
{
    int sum = 0;
    for (int i = 0; i <= 4; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    printf("Sum = %d", sum);

    getch();
    return 0;
}
