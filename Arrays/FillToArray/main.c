#include <stdio.h>
#include <conio.h>

#define SIZE 10

int main()
{
	int s[SIZE];

	for(int j = 0; j < SIZE; j++)
        s[j] = 2 + 2 * j;

	printf("%s%13s\n", "Element", "Value");
	for(int j = 0; j < SIZE; j++)
        printf("%7d%14d\n", j, s[j]);

	getch();
	return 0;
}
