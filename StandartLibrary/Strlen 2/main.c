#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	const char *s1="abcdefkgjdjdhsggeb";
	const char *s2="dort";
	const char *s3="Nigde";

	printf("%s\"%s\"=%u\n%s\"%s\"=%u\n%s\"%s\"=%u\n",
		"String1 length = ", s1, strlen(s1),
		"String2 length = ", s2, strlen(s2),
		"String3 length = ", s3, strlen(s3));

	getch();
	return 0;
}
