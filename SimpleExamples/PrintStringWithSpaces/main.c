#include <stdio.h>
#include <conio.h>

void Print(const char *str);

int main()
{
	char str[] = "write the characters in order";
	printf("String = ");
	Print(str);
	printf("\n");

	getch();
	return 0;
}

void Print(const char *str)
{
	for (; *str != '\0'; str++)
		printf("%3c", *str);
}
