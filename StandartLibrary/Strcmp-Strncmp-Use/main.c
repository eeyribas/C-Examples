#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	const char *s_1 = "Happy new year";
	const char *s_2 = "Happy new year";
	const char *s_3 = "Happy holiday";

	printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
		"s1 = ", s_1,"s2 = ", s_2, "s3 = ",s_3,
		"strcmp(s1, s2) = ", strcmp(s_1, s_2),
		"strcmp(s1, s3) = ", strcmp(s_1, s_3),
		"strcmp(s2, s3) = ", strcmp(s_2, s_3));

	printf("%s%2d\n%s%2d\n%s%2d\n",
		"strncmp(s1, s3, 6) = ", strncmp(s_1, s_3, 6),
		"strncmp(s1, s3, 7) = ", strncmp(s_1, s_3, 7),
		"strncmp(s3, s2, 4) = ", strncmp(s_3, s_2, 4));

	getch();
	return 0;
}
