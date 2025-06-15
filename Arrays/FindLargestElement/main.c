#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100], size;

	printf("Enter the number of elements of array : ");
	scanf("%d", &size);
	for (int i = 0; i < size; i++) {
		printf("Array(%d) = ", i);
		scanf("%d", &array[i]);
	}

	int larg = array[1];
	for (int i = 0; i < size; i++) {
		if (array[i] > larg)
            larg = array[i];
	}
	printf("Largest element = %d\n", larg);

	getch();
    return 0;
}
