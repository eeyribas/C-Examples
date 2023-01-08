#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	const char *s1="abcdefabcdef";
	const char *s2="def";

	printf("%s%s\n%s%s\n\n%s\n%s%s\n",
		"string_1= ", s1, "string_2= ", s2,
		"sting_1 and string_2 compare ",
		"All : ",
		strstr(s1, s2));

	getch();
	return 0;
}
