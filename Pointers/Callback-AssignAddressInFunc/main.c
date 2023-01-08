#include <stdio.h>
#include <string.h>

void Check(char *a, char *b,
int (*cmp)(const char *, const char *));

int main(void)
{
    char s_1[80], s_2[80];
	int (*p)(const char *, const char *);
	p = strcmp;
	printf("Enter two strings.\n");
	gets(s_1);
	gets(s_2);
	Check(s_1, s_2, p);

	return 0;
}

void Check(char *a, char *b, int (*cmp)(const char *, const char *))
{
    printf("Testing for equality.\n");
    if(!(*cmp)(a, b))
        printf("Equal");
	else
        printf("Not Equal");
}
