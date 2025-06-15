#include <stdio.h>
#include <conio.h>

void Copy1(char*, const char*);
void Copy2(char*, const int*);

int main()
{
	char string_1[10], *string_2 = "Hello", string_3[10], string_4[] = "Good bye";
	Copy1(string_1, string_2);
	printf("string_1 = %s\n", string_1);
	Copy2(string_3, string_4);
	printf("string_3 = %s\n", string_3);

	getch();
	return 0;
}

void Copy1(char *string_1, const char *string_2)
{
	for (int i=0; (string_1[i] = string_2[i]) != '\0'; i++);
}

void Copy2(char *string_3, const int *string_4)
{
	for (; (*string_3 = *string_4) != '\0'; string_3++, string_4++);
}
