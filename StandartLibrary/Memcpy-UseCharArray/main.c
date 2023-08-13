#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char s_1[16], s_2[] = "String copy";
	memcpy(s_1, s_2, 16);
	printf("%s\n%s\"%s\"\n", "s2, s1' copy", "s1 content: ", s_1);

	getch();
	return 0;
}
