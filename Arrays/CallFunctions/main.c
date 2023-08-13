#include <stdio.h>
#include <conio.h>

#define SIZE 5

void SetArray(int [], int);
void SetElement(int);

int main()
{
	int a[SIZE] = {0, 1, 2, 3, 4};

	printf("Reference values.\n\n");

	printf("Original\n");
	for(int i = 0; i < SIZE; i++)
        printf("%3d", a[i]);
	printf("\n");

	SetArray(a, SIZE);
	printf("\nSet Array\n");
	for(int i = 0; i < SIZE; i++)
        printf("%3d", a[i]);

	printf("\n\n\n Settings..\n\n");
	printf("a[3] value %d\n", a[3]);
	SetElement(a[3]);
	printf("a[3] value %d\n", a[3]);

	getch();
	return 0;
}

void SetArray(int b[], int a)
{
	for(int j = 0; j < a; j++)
        b[j] *= 2;
}

void SetElement(int a)
{
	printf("SetElement = %d\n", a*=2);
}
