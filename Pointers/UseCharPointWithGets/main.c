#include <stdio.h>

#define MAX 81

int main(void)
{
    char name[MAX];
    char* ptr;
    printf("Whats your name?\n");
    ptr = gets(name);
    printf("%s? very good name %s!\n", name, ptr);

    return 0;
}
