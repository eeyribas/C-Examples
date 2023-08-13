#include <stdio.h>
#include <conio.h>

void Print(const char*);

int main()
{
	char string[] = "write the characters in order";
	printf("String:\n");
	Print(string);
	printf("\n");

	getch();
	return 0;
}

void Print(const char* pon)
{
	for(; *pon != '\0'; pon++)
		printf("%3c", *pon);
}
