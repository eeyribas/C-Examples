#include <stdlib.h>
#include <stdio.h>

int main()
{
    unsigned num;
    int *ptr;

    printf("Memory int count:");
    scanf("%d", &num);

    ptr = (int*)calloc(num, sizeof(int));

    if (ptr != NULL)
        puts("Success");
    else
        puts("Fail");

    return(0);
}
