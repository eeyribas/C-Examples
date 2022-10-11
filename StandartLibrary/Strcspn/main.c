#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	const char *s1="Value 3.1234";
	const char *s2=" .1234";

	printf("%s%s\n%s%s\n\n\n%s%u",
		"string1= ", s1, "string2= ", s2,
		"string1 sub string2 = ",
		strcspn(s1, s2));

	getch();
	return 0;
}
