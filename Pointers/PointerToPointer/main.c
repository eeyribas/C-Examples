#include <stdio.h>

int main(void)
{
    int *p, **q;
    int x = 10;
    p = &x;
    q = &p;
    printf("%d", **q);

    return 0;
}
