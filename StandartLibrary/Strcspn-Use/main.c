#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	const char *s_1 = "Value 3.1234";
	const char *s_2 = " .1234";

	printf("%s%s\n%s%s\n\n\n%s%u",
		"string1 = ", s_1, "string2 = ", s_2,
		"string1 sub string2 = ",
		strcspn(s_1, s_2));

	getch();
	return 0;
}
