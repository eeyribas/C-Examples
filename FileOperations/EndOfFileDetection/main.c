#include <stdlib.h>
#include <stdio.h>
#define BUF_SIZE 100

int main()
{
    char buf[BUF_SIZE];
    char file_name[60];
    FILE *fp;

    puts("File name: ");
    gets(file_name);
    if((fp = fopen(file_name, "r")) == NULL)
    {
        fprintf(stderr, "Error.");
        exit(1);
    }

    while(!feof(fp) )
    {
        fgets(buf, BUF_SIZE, fp);
        printf("%s",buf);
    }
    fclose(fp);

    return(0);
}
