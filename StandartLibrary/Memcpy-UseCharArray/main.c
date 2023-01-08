#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s1[16], s2[]="String copy";
	memcpy(s1, s2, 16);
	printf("%s\n%s\"%s\"\n", "s2, s1' copy", "s1 content: ", s1);

	getch();
	return 0;
}
