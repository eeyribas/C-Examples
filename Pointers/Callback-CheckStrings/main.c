#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void Check(char *a, char *b, int (*cmp)(const char *, const char *));
int CompValues(const char *a, const char *b);

int main(void)
{
    char s_1[80], s_2[80];
    printf ("Enter two values or two strings.\n");
    gets(s_1);
    gets(s_2);

    if(isdigit(*s_1))
    {
        printf("Testing values for equality.\n");
        Check(s_1, s_2, CompValues);
    }
    else
    {
        printf("Testing strings for equality.\n");
        Check(s_1, s_2, strcmp);
    }

    return 0;
}

void Check(char *a, char *b,  int (*cmp)(const char *, const char *))
{
    if(!(*cmp)(a, b))
        printf("Equal");
    else
        printf("Not Equal");
}

int CompValues(const char *a, const char *b)
{
    if(atoi(a)==atoi(b))
        return 0;
    else
        return 1;
}
