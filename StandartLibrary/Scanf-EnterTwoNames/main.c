#include <stdio.h>

int main(void)
{
    char name_1[11], name_2[11];
    printf("Enter two names: \n");
    int count = scanf("%5s %10s", name_1, name_2);
    printf("%d names: %s and %s.\n", count, name_1, name_2);

    getch();
    return 0;
}
