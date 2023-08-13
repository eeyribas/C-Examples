#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	const char *s_1 = "abcdefabcdef";
	const char *s_2 = "def";

	printf("%s%s\n%s%s\n\n%s\n%s%s\n",
		"string_1 = ", s_1, "string_2 = ", s_2,
		"sting_1 and string_2 compare ",
		"All : ",
		strstr(s_1, s_2));

	getch();
	return 0;
}
