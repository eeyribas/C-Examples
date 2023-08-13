#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	const char *s_1 = "pi = 3.14159";
	const char *s_2 = "is paiy";

	printf("%s%s\n%s%s\n\n%s\n%s%u\n", "string_1= ", s_1,
		"string_2= ", s_2, "string2 character it contains ",
		"string1 length= ", strspn(s_1, s_2));

	getch();
	return 0;
}
