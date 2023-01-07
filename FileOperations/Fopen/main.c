#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *fp;
    char file_name[40], mode[4];

    while (1){
        printf("\nFile name: ");
        gets(file_name);
        printf("\nEnter a mode (max 3 character): ");
        gets(mode);
        if((fp = fopen( file_name, mode )) != NULL){
            printf("\nFile name: %s mode: %s\n", file_name, mode);
            fclose(fp);
            puts("Exit = x");
            if((getc(stdin)) == 'x')
                break;
            else
                continue;
        }
        else{
            fprintf(stderr, "\nFile name %s mode error: %s.\n", file_name, mode);
            puts("Exit = x");
            if((getc(stdin)) == 'x')
                break;
            else
                continue;
        }
    }
}
