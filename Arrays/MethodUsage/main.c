#include <stdio.h>
#include <conio.h>

#define LENGTH 10

int Method(int array[], int size);

int main()
{
	int array[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int sum = Method(array, LENGTH);
	printf("Array values (sum) : %d\n", sum);

	getch();
	return 0;
}

int Method(int array[], int size)
{
	if (size == 1)
		return array[0];
	else
		return array[size - 1] + Method(array, size - 1);
}
