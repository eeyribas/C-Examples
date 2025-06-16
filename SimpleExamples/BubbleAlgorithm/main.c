#include <stdio.h>
#include <conio.h>

#define SIZE 10

void Bubble(int[], const int, int(*)(int, int));
int Increase(int, int);
int Decrease(int, int);

int main()
{
	int array[SIZE] = {1, 23, 34, 2, 3, 12, 11, 6, 38, 56};
	int select;

	printf("Enter '1' increase.\nEnter '2' decrease.\n");
	scanf("%d", &select);

	printf("\nData : ");
	for (int i = 0; i < SIZE; i++)
		printf("%5d", array[i]);
	printf("\n");

	if (select == 1) {
		Bubble(array, SIZE, Decrease);
		printf("\nDecrease : ");
	} else {
		Bubble(array, SIZE, Increase);
		printf("\nIncrease : ");
	}

	for (int i = 0; i < SIZE; i++)
		printf("%5d", array[i]);
	printf("\n");

	getch();
	return 0;
}

void Bubble(int array[], const int length, int(*compare)(int, int))
{
	void ChangeLocation(int*, int*);

    for (int i = 1; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if ((*compare)(array[j], array[j + 1]))
                ChangeLocation(&array[j], &array[j + 1]);
        }
    }
}

void ChangeLocation(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int Increase(int a, int b)
{
	return b < a;
}

int Decrease(int a, int b)
{
    return a < b;
}
