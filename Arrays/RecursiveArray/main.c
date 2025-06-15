#include <stdio.h>
#include <conio.h>

#define SIZE 10

void Function(int[], int);

int main()
{
	int array[SIZE] = {32, 22, 12, 123, 43, 5, 6, 11, 10, 67};
	printf("Array elements : \n");
	Function(array, SIZE);
	printf("\n");

	getch();
	return 0;
}

void Function(int array[], int size)
{
	if (size > 0) {
		Function(&array[1], size - 1);
		printf("%d ", array[0]);
	}
}
