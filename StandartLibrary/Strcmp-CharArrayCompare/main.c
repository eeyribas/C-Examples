#include <stdio.h>
#include <string.h>

#define ANSWER "word"
#define MAX 40

int main(void)
{
    char tmp[MAX];
    puts("Answer?");
    gets(tmp);

    while(strcmp(tmp,ANSWER) != 0){
        puts("Error, Answer?");
        gets(tmp);
    }
    puts("True");

    getch();
    return 0;
}
