#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	const char *string = "51.2 % to accept";
	char *string_ptr;

	double d = strtod(string, &string_ptr);
	printf("string: \"%s\"\n", string);
	printf("convert double %.2f and string %s", string_ptr);

	getch();
	return 0;
}
