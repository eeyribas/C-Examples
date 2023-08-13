#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	const char *s_1 = "abcdefkgjdjdhsggeb";
	const char *s_2 = "dort";
	const char *s_3 = "Nigde";

	printf("%s\"%s\"=%u\n%s\"%s\"=%u\n%s\"%s\" = %u\n",
		"String1 length = ", s_1, strlen(s_1),
		"String2 length = ", s_2, strlen(s_2),
		"String3 length = ", s_3, strlen(s_3));

	getch();
	return 0;
}
