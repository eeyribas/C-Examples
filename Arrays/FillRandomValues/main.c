#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("Array = {");
	for (int i = 0; i < 10; i++) {
		int number = rand() % 11 - 5;
		printf(", %d", number);
	}
	printf("}\n");

	getch();
	return 0;
}
