#include <stdio.h>
#include <conio.h>

int main()
{
    int sum = 0;
    for (int i = 2; i <= 100; i += 2)
        sum += i;
    printf("%d", sum);

    getch();
    return 0;
}
