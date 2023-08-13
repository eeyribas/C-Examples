#include <stdio.h>
#include <conio.h>

int main()
{
	int b[] = {10, 20, 30, 40};
	int *b_ptr = b;

	printf("Raw\n");
	for(int i = 0; i < 4; i++)
		printf("b[%d]=%d\n", i, b[i]);

	printf("\nOffset\n");
	for(int offset = 0; offset < 4; offset++)
		printf("*(b+%d)=%d\n", offset, *(b + offset));

	printf("\nPointer\n");
	for(int i = 0; i < 4; i++)
		printf("b_ptr[%d]=%d\n", i, b_ptr[i]);

	printf("\nOffset\n");
	for(int offset = 0; offset < 4; offset++)
		printf("*(b_ptr+%d)=%d\n", offset, *(b_ptr + offset));

	getch();
	return 0;
}
