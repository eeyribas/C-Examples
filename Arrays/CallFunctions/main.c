#include <stdio.h>
#include <conio.h>

#define SIZE 5

void SetArray(int[], int);
void SetElement(int);

int main()
{
	int array[SIZE] = {0, 1, 2, 3, 4};

	printf("Original\n");
	for (int i = 0; i < SIZE; i++)
        printf("%3d", array[i]);
	printf("\n");

	SetArray(array, SIZE);
	printf("\nSet Array\n");
	for (int i = 0; i < SIZE; i++)
        printf("%3d", array[i]);
    printf("\n");

	printf("\na[3] value: %d\n", array[3]);
	SetElement(array[3]);
	printf("\na[3] value: %d\n", array[3]);

	getch();
	return 0;
}

void SetArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
        array[i] *= 2;
}

void SetElement(int a)
{
	printf("\nSetElement: %d\n", a *= 2);
}
