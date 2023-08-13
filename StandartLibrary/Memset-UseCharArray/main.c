#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char s_1[15] = "BBBBBBBBBBBBBB";
	printf("string1 = %s\n", s_1);
	printf("memsetten code string1 = %s\n", memset(s_1, 'b', 7));

	getch();
	return 0;
}
