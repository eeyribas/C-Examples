#include <stdio.h>

int var = 1;
int *ptr;

int main()
{
    ptr = &var;
    printf("\n Direct, var = %d", var);
    printf("\n Indirect, var = %d", *ptr);

    printf("\n\n var address  = %d", &var);
    printf("\n var address = %d\n", ptr);

    return 0;
}
