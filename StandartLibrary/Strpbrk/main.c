#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	const char *s1="This is a test.";
	const char *s2="Care";

	printf("%s %s %c %s \n %s %s", s2, "string characters",
		*strpbrk(s1, s2), "carachters", s1, " .");

	getch();
	return 0;
}
