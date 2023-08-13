#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("The command line has %d arguments:\n", argc - 1);
    for(int count = 1; count < argc; count++)
        printf("%d: %s\n", count, argv[count]);
    printf("\n");

    return 0;
}
