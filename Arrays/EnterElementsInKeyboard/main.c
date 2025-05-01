#include <stdio.h>
#include <conio.h>

int main()
{
	int array[10];
	for (int i = 0; i < 10; i++) {
		printf("Enter element = ");
		scanf("%d", &array[i]);
	}

	printf("\n\nArray Elements\n");
	for (int i = 0; i < 10; i++)
        printf("%d\t", array[i]);

	getch();
	return 0;
}
