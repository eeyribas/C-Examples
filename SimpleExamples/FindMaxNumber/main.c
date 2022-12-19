#include <stdio.h>

int IMax(int, int);

int main(void)
{
    printf("Max number: %d.\n", IMax(3.0, 5.0));
    return 0;
}

int IMax(int n, int m)
{
    int max;
    if (n > m)
        max = n;
    else
        max = m;
    return max;
}
