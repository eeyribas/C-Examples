#include <stdio.h>
#include<conio.h>

int main(void)
{
    int array[] = {12, 10, 8, 6, 4, 2, 0};
    int *ptr;
    int index;
    ptr=array;

    for (index = 0; index < 7;)
    {
        printf("%d\t%d\n", array[index], *ptr);
        index+=2;
        ptr+=1;
    }

    getch();
    return 0;
}
