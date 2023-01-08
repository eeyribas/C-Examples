#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	const char *s1="pi = 3.14159";
	const char *s2="is paiy";

	printf("%s%s\n%s%s\n\n%s\n%s%u\n", "string_1= ", s1,
		"string_2= ", s2, "string2 character it contains ",
		"string1 length= ", strspn(s1, s2));

	getch();
	return 0;
}
