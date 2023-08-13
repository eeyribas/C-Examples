#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void Clear(void);

int main()
{
    FILE *fp;
    float data[5];
    char file_name[20];

    puts("Enter five numbers:");
    for(int count = 0; count < 5; count++)
        scanf("%f", &data[count]);

    Clear();
    puts("File name:");
    gets(file_name);
    if((fp = fopen(file_name, "w")) == NULL){
        fprintf(stderr, "Dont create file %s.", file_name);
        exit(1);
    }
    for(int count = 0; count < 5; count++){
        fprintf(fp, "\ndata[%d] = %f", count, data[count]);
        fprintf(stdout, "\ndata[%d] = %f", count, data[count]);
    }
    fclose(fp);
    printf("\n");

    getch();
    return(0);
}

void Clear(void)
{
    char junk[80];
    gets(junk);
}
