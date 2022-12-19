#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(){

	printf("%s\n%s\n%s\n\n", "for isdigit:", isdigit('8') ? "8 is a number"
		: "8 is not a number", isdigit('#') ? "# is a number" :
		"# is not a number");

	printf("%s\n%s\n%s\n%s\n%s\n\n",
		"for issalpha: ",
		isalpha('A') ? "A is a letter" : "A is not a letter",
		isalpha('b') ? "b is a letter." : "b is not a letter",
		isalpha('&') ? "& is a letter" : "& is not a letter",
		isalpha('4') ? "4 is a letter" : "4 is not a letter");

	printf("%s\n%s\n%s\n%s\n\n", "for isalnum: ",
		isalnum('A') ? "A is a number or letter" : "A is not a number or letter",
		isalnum('8') ? "8 is a number or letter" : "8 is not a number or letter",
		isalnum('#') ? "# is a number or letter" : "# is not a number or letter");

	printf("%s\n%s\n%s\n%s\n%s\n%s\n", "for isxdigit: ",
		isxdigit('F') ? "F is a hexadecimal number" : "F is not a hexadecimal number",
		isxdigit('J') ? "J is a hexadecimal number" : "J is not a hexadecimal number",
		isxdigit('7') ? "7 is a hexadecimal number" : "7 is not a hexadecimal number",
		isxdigit('$') ? "$ is a hexadecimal number" : "$ is not a hexadecimal number",
		isxdigit('f') ? "f is a hexadecimal number" : "f is not a hexadecimal number");

	getch();
	return 0;

}
