#include<stdio.h>

#define MAX 81

int main(void)
{
    char name[MAX];
    printf("Hello, whats your name?\n");
    gets(name);
    printf("Very good name, %s.\n", name);

    getch();
    return 0;
}
