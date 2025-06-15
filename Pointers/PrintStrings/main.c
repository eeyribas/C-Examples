#include <stdio.h>
#include <conio.h>

void PrintStrings(char *p[], int n);

int main()
{
    char *message[4] = {"win", "person", "good", "lesson"};
    PrintStrings(message, 4);

    getch();
    return(0);
}

void PrintStrings(char *p[], int n)
{
    for (int i = n - 1; i >=0; i -= 2)
        printf("%s ", p[i]);
}
