#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Delete file name: ");
    char file_name[80];
    gets(file_name);

    if (remove(file_name) == 0)
        printf("Success file name: %s.\n", file_name);
    else
        fprintf(stderr, "Error file name: %s.\n", file_name);

    getch();
    return(0);
}
