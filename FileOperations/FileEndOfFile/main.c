#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define BUF_SIZE 100

int main()
{
    char buffer[BUF_SIZE];
    char file_name[60];
    FILE *file;

    puts("File name: ");
    gets(file_name);
    if ((file = fopen(file_name, "r")) == NULL) {
        fprintf(stderr, "Error.");
        exit(1);
    }

    while (!feof(file)) {
        fgets(buf, BUF_SIZE, fp);
        printf("%s", buf);
    }
    fclose(file);

    getch();
    return(0);
}
