#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	const char *s1="Happy new year";
	const char *s2="Happy new year";
	const char *s3="Happy holiday";

	printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
		"s1= ", s1,"s2= ", s2, "s3= ",s3,
		"strcmp(s1, s2)= ", strcmp(s1, s2),
		"strcmp(s1, s3)= ", strcmp(s1, s3),
		"strcmp(s2, s3)= ", strcmp(s2, s3));

	printf("%s%2d\n%s%2d\n%s%2d\n",
		"strncmp(s1, s3, 6)= ",strncmp(s1, s3, 6),
		"strncmp(s1, s3, 7)= ",strncmp(s1, s3, 7),
		"strncmp(s3, s2, 4)= ",strncmp(s3, s2, 4));

	getch();
	return 0;
}
