#include <stdio.h>
#include <conio.h>

int main()
{
	int array[10];

	for(int i = 0; i < 10; i++){
		printf("Enter element = ");
		scanf("%d", &array[i]);
	}
	printf("\n\nArray Eleemnts\n");

	for(int j = 0; j < 10; j++)
        printf("%d\t", array[j]);

	getch();
	return 0;
}
