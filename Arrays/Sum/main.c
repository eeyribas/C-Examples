#include <stdio.h>
#include <conio.h>

#define SIZE 10

int main()
{
	int array[SIZE] = {23, 12, 43, 2, 89, 12, 13, 14, 54, 10};

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
        sum += array[i];

	printf("%s%13s\n", "Element", "Value");
	for (int i = 0; i < SIZE; i++)
        printf("%6d%13d\n", i, array[i]);
	printf("Sum = %d", sum);

	getch();
	return 0;
}
