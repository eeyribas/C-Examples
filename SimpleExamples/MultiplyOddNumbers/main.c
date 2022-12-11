#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1, mult=1;
    for(i=1; i<=5; i++){
        if(i % 2 == 1)
            mult = mult*i;
    }

    printf("Multiply=%d", mult);

    getch();
    return 0;
}
