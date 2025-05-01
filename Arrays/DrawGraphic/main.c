#include <stdio.h>
#include <conio.h>

#define SIZE 10

int main()
{
	int array[SIZE] = {12, 34, 21, 1, 2, 6, 5, 3, 9, 12};

	printf("%s%13s%17s\n", "Element", "Value", "Graphic");
	for (int i = 0; i < SIZE; i++) {
        printf("%7d%13d  ", i, array[i]);

        for (int j = 0; j < array[i]; j++)
            printf("%c", '*');
        printf("\n");
	}

	getch();
	return 0;
}
