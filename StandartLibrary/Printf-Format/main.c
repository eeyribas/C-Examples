#include <stdio.h>

int main()
{
    int number = 345;
    printf("%07d\n", number);
    printf("%-7d\n", number);
    printf("%-7d!\n", number);

    return 0;
}

