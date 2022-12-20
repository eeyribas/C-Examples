#include <stdio.h>
#define MAX 81

int main(void)
{
    char name[MAX];
    char* ptr;

    printf("Whats your name?\n");
    ptr = fgets(name, MAX, stdin);
    printf("%s very good! %s\n", name, ptr);

    return 0;

}
