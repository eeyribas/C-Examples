#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void Clear(void);

int main()
{
    FILE *file;
    float data[5];
    char file_name[20];

    puts("Enter five numbers:");
    for (int i = 0; i < 5; i++)
        scanf("%f", &data[i]);

    Clear();
    puts("File name:");
    gets(file_name);
    if ((file = fopen(file_name, "w")) == NULL) {
        fprintf(stderr, "Dont create file %s.", file_name);
        exit(1);
    }

    for (int i = 0; i < 5; i++) {
        fprintf(file, "\ndata[%d] = %f", i, data[i]);
        fprintf(stdout, "\ndata[%d] = %f", i, data[i]);
    }

    fclose(file);
    printf("\n");

    getch();
    return(0);
}

void Clear(void)
{
    char junk[80];
    gets(junk);
}
