#include <stdio.h>

int main()
{
    char file_name[80];
    printf("Delete file name: ");
    gets(file_name);

    if(remove(file_name) == 0)
        printf("Success file name: %s.\n", file_name);
    else
        fprintf(stderr, "Error file name: %s.\n", file_name);

    return(0);
}
