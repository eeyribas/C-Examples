#include <stdio.h>
#include <conio.h>

int main()
{
    int top = 0;
    for(int i = 0; i <= 4; i++){
        if(i % 2 == 0)
            top += i;
    }
    printf("Sum = %d", top);

    getch();
    return 0;
}
