#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	const char *s = "This is a string.";
	printf("%s %c %s %s \n", "s", "in", "r", memchr(s, 'r', 6));

	getch();
	return 0;
}
