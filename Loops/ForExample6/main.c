#include <stdio.h>
#include<conio.h>
int main(void)
{
     int i;
     char ch;
     for (i = 0, ch = 'M'; i < 3; i++, ch -= 3 * i)
        printf("%c", ch);

	 getch();
     return 0;
}
