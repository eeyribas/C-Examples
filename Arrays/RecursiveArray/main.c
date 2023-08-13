#include <stdio.h>
#include <conio.h>

#define SIZE 10

void Function(int[], int);

int main()
{
	int a[SIZE] = {32, 22, 12, 123, 43, 5, 6, 11, 10, 67};

	printf("Array elements : \n");
	Function(a, SIZE);
	printf("\n");

	getch();
	return 0;
}

void Function(int a[], int b)
{
	if(b>0){
		Function(&a[1], b - 1);
		printf("%d ", a[0]);
	}
}
