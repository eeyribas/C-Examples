#include <stdio.h>
#include <conio.h>

int main()
{
    int mult = 1;
    for(int i = 1; i <= 5; i++){
        if(i % 2 == 1)
            mult = mult * i;
    }
    printf("Multiply=%d", mult);

    getch();
    return 0;
}
