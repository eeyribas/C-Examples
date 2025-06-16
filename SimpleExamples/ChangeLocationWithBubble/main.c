#include <stdio.h>
#include <conio.h>

#define SIZE 10

void Bubble(int*, const int);

int main()
{
	int array[SIZE] = {2, 12, 3, 43, 34, 33, 55, 56, 1, 25};

	printf("Data\n");
	for (int i = 0; i < SIZE; i++)
        printf("%d ", array[i]);

	Bubble(array, SIZE);
	printf("\nIncrease\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", array[i]);
	printf("\n");

	getch();
	return 0;
}

void Bubble(int *a, int b)
{
	void ChangeLocation(int*, int*);

	for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (a[j] > a[j + 1])
				ChangeLocation(&a[j], &a[j + 1]);
        }
	}
}

void ChangeLocation(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
