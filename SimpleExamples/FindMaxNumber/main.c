#include <stdio.h>

int Max(int, int);

int main()
{
    printf("Max number: %d.\n", Max(3.0, 5.0));

    getch();
    return 0;
}

int Max(int n, int m)
{
    int max;
    if (n > m)
        max = n;
    else
        max = m;

    return max;
}
