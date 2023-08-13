#include <stdio.h>
#include <conio.h>

int main()
{
	char str[] = "Fiiiinaaaaall";
	char *ps;
	int i = 13;
    for(ps = str; *ps != '\0'; ps++){
        if(*ps == 'i' || *ps == 'n')
            putchar(*ps);
        else
            (*ps)--;
    }
    putchar('\n');

	getch();
    return 0;
}
