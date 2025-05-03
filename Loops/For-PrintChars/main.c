#include <stdio.h>
#include <conio.h>

int main(void)
{
    char ch;
    for (int i = 0, ch = 'M'; i < 3; i++, ch -= 3 * i)
        printf("%c", ch);

    getch();
    return 0;
}
