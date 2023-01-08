#include<stdio.h>
#include<conio.h>

int main()
{
	char str1[]="Fiiiinaaaaall";
	char *ps;
	int i = 13;
    for(ps = str1; *ps != '\0'; ps++){
        if(*ps == 'i' || *ps == 'n')
            putchar(*ps);
        else
            (*ps)--;
    }
    putchar('\n');

	getch();
    return 0;
}
