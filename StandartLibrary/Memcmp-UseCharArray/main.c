#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char s_1[] = "ABCEF", s_2[] = "ABCDXYZ";

	printf("%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n",
		"s1= ", s_1, "s2= ", s_2,
		"memcmp(s1, s2, 4)= ", memcmp(s_1, s_2, 4),
		"memcmp(s1, s2, 7)= ", memcmp(s_1, s_2, 7),
		"memcmp(s2, s1, 7)= ", memcmp(s_2, s_1, 7));

	getch();
	return 0;
}
