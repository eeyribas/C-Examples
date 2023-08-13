#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char s_1[20] = "Happy";
	char s_2[] = "Happy year";
	char s_3[40] = "";

	printf("s1=%s\ns2=%s\n\n", s_1, s_2);
	printf("strcat(s1, s2)=%s\n", strcat(s_1, s_2));
	printf("strncat(s3, s1,2)=%s\n", strncat(s_3, s_1, 2));
	printf("strcat(s3, s1)=%s\n", strcat(s_3, s_1));

	getch();
	return 0;
}
