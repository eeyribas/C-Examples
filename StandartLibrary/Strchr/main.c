#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	const char *s1="This is a test.";
	char ch1='h', ch2='z';

	if(strchr(s1, ch1) != NULL)
		printf("\'%c\'string found:\"%s\".\n", ch1, s1);
	else
		printf("\'%c\'string is not found:\"%s\".\n", ch1, s1);
	if(strchr(s1, ch2) != NULL)
		printf("\'%c\'string found:\"%s\".\n", ch2, s1);
	else
		printf("\'%c\'string is not found:\"%s\".\n", ch2, s1);

	getch();
	return 0;
}
