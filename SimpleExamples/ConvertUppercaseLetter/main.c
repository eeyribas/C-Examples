#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void ConvertUppercaseLetter(char*);

int main()
{
	char str[] = "characters and $32.98";
	printf("Before:%s\n", str);
	ConvertUppercaseLetter(str);
	printf("After:%s", str);

	getch();
	return 0;
}

void ConvertUppercaseLetter(char *str)
{
	while (*str != '\0') {
		if (islower(*str))
			*str = toupper(*str);
		++str;
	}
}
