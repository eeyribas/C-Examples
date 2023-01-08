#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s1[]="ABCEF", s2[]="ABCDXYZ";

	printf("%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n",
		"s1= ", s1, "s2= ",s2,
		"memcmp(s1, s2, 4)= ", memcmp(s1, s2, 4),
		"memcmp(s1, s2, 7)= ", memcmp(s1, s2, 7),
		"memcmp(s2, s1, 7)= ", memcmp(s2, s1, 7));

	getch();
	return 0;
}
