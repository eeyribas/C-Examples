#include <stdio.h>
#include <conio.h>

#define SIZE 10

int main()
{
	int array[SIZE];
	for (int i = 0; i < SIZE; i++)
        array[i] = 2 + 2 * i;

	printf("%s%13s\n", "Element", "Value");
	for (int i = 0; i < SIZE; i++)
        printf("%7d%14d\n", i, array[i]);

	getch();
	return 0;
}
