#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	const char *s = "A zoooo asmnu ahgl wudhu zkrt";
	int c = 'z';

	printf("%c %s \n %s \n ", c, "last character", strrchr(s, c));

	getch();
	return 0;
}
