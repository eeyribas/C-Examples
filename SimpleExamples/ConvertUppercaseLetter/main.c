#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void ConvertUppercaseLetter(char *);

int main()
{
	char string[] = "characters and $32.98";
	printf("Before:%s\n", string);
	ConvertUppercaseLetter(string);
	printf("After:%s", string);

	getch();
	return 0;
}

void ConvertUppercaseLetter(char *string)
{
	while(*string != '\0'){
		if(islower(*string))
			*string = toupper(*string);
		++string;
	}
}
