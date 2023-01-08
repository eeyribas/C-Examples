#include<stdio.h>
#include<conio.h>

int main()
{
    int i, top=0;
    for(i=0; i<=4; i++){
        if(i % 2 == 0)
            top += i;
    }
    printf("Sum = %d", top);

    getch();
    return 0;
}
