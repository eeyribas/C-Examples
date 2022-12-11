#include <stdio.h>
#include<conio.h>

void PrintStrings(char *p[], int n);

int main()
{
    char *message[4] = { "kazanir", "calisan", "iyi", "dersine"};
    PrintStrings(message, 4);

    getch();
    return(0);
}

void PrintStrings(char *p[], int n)
{
    int count;
    for(count = n-1; count >=0; count-=2)
        printf("%s ", p[count]);
}
