#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i;
	int number;

	printf("Array = {");
	for(i = 0; i<10; i++){
		number = rand()%11 - 5;
		printf(", %d", number);
	}
	printf("}\n");

	_getch();

	return 0;
}
