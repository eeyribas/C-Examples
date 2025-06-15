#include <stdio.h>
#include <conio.h>

#define SIZE 100

int LinearSearch(const int array[], int key, int size);

int main()
{
	int array[SIZE], search_value, element;
	for (int i = 0; i < SIZE; i++)
        array[i] = 2 * i;

	printf("Searh Value = ");
	scanf("%d", &search_value);
	element = LinearSearch(array, search_value, SIZE);

	if (element != -1)
        printf("Find.");
	else
        printf("Not find.");

	getch();
	return 0;
}

int LinearSearch(const int array[], int key, int size)
{
	for (int i = 0; i < size; i++) {
        if (array[i] == key)
            return i;
	}

	return -1;
}
