#include <stdio.h>

#define MAX 81

int main()
{
    char name[MAX];
    printf("Whats your name?\n");
    char *ptr = gets(name);
    printf("%s? very good name %s!\n", name, ptr);

    return 0;
}
