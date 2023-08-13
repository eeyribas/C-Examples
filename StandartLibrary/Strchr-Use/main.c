#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	const char *s_1 = "This is a test.";
	char ch_1 = 'h', ch_2 = 'z';

	if(strchr(s_1, ch_1) != NULL)
		printf("\'%c\'string found:\"%s\".\n", ch_1, s_1);
	else
		printf("\'%c\'string is not found:\"%s\".\n", ch_1, s_1);

	if(strchr(s_1, ch_2) != NULL)
		printf("\'%c\'string found:\"%s\".\n", ch_2, s_1);
	else
		printf("\'%c\'string is not found:\"%s\".\n", ch_2, s_1);

	getch();
	return 0;
}
