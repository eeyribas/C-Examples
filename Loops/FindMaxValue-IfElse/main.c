#include <stdio.h>

int Max(int, int);

int main(void)
{
    printf("Numbers: %d and %d Max: %d.\n", 3, 5, Max(3.0, 5.0));
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
