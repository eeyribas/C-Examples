#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	const char *string = "1234567abc";
	char *ptr;

	unsigned long x = strtoul(string, &ptr, 0);
	printf("%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n", "Original string: ",
		string, "converted value: ", x, " residual: ",
		ptr, " -567: ", x - 567);

	getch();
	return 0;
}
