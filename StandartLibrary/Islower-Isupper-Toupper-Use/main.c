#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    printf("%s\n%s\n%s\n%s\n%s\n\n", "for islover: ",
		islower('p') ? "p is a lowercase letter" : "p is not a lowercase letter",
		islower('P') ? "P is a lowercase letter" : "P is not a lowercase letter",
		islower('5') ? "5 is a lowercase letter" : "5 is not a lowercase letter",
		islower('!') ? "! is a lowercase letter" : "! is not a lowercase letter");

	printf("%s\n%s\n%s\n%s\n%s\n\n", "for isupper: ",
		isupper('D') ? "D is a uppercase letter" : "D is not a uppercase letter",
		isupper('d') ? "d is a uppercase letter" : "d is not a uppercase letter",
		isupper('8') ? "8 is a uppercase letter" : "8 is not a uppercase letter",
		isupper('$') ? "$ is a uppercase letter" : "$ is not a uppercase letter");

	printf("%s%c\n%s%c\n%s%c\n%s%c\n", "u big letter: ", toupper('u'),
		"7 big letter: ", toupper('7'),
		"$ big letter: ", toupper('$'),
		"L big letter: ", toupper('L'));

	getch();
	return 0;
}
