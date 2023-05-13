#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x = '\2A';
	char y = '\0F';
	printf("%d\n", x & y);
	printf("%d\n", x | y);
	printf("%d\n", x ^ y);

    return 0;
}
