#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	const char *string = "-1234567abc";
	char *ptr;

	long x = strtol(string, &ptr, 0);
	printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s&ld\n",
		"Original string:", string, "Converted value: ", x,
		": ", ptr,
		" +567: ", x + 567);

	getch();
	return 0;
}
