#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	const char *s_1 = "This is a test.";
	const char *s_2 = "Care";
	printf("%s %s %c %s \n %s %s", s_2, "string characters", *strpbrk(s_1, s_2), "carachters", s_1, " .");

	getch();
	return 0;
}
