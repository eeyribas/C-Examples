#include <stdio.h>
#include <conio.h>

int main()
{
    char old_name[80], new_name[80];

    printf("file name: ");
    gets(old_name);
    printf("new file name: ");
    gets(new_name);

    if(rename(old_name, new_name) == 0)
        printf("%s new file name: %s changed.\n", old_name, new_name);
    else
        fprintf(stderr, "file name: %s error.\n", old_name);

    getch();
    return(0);
}
