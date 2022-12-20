#include <stdio.h>

char input[81], *ptr;

int main()
{
    puts("Enter word: ");
    puts("Finished = space");

    while(*(ptr = gets(input)) != NULL)
        printf("Input: %s\n", input);
    puts("Finished\n");

    return 0;
}
