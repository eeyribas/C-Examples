#include <stdio.h>
#include <conio.h>

void StaticFunction(void);
void AutoFunction(void);

int main()
{
	printf("First, call Functions\n");
	StaticFunction();
	AutoFunction();
	printf("\n\nSecond, call Functions\n");
	StaticFunction();
	AutoFunction();

	getch();
	return 0;
}

void StaticFunction(void)
{
	static int a[3];

	printf("\nStaticFunction values:\n");
	for(int i = 0; i <= 2; i++)
        printf("array1[%d]=%d", i, a[i]);

	printf("\nStaticFunction is adding:\n");
	for(int i = 0; i <= 2; i++)
        printf("array1[%d]=%d", i, a[i] += 5);
}

void AutoFunction(void)
{
	int a[3] = {1, 2, 3};

	printf("\nAutoFunction values:\n");
	for(int i = 0; i <= 2; i++)
        printf("array2[%d]:%d", i, a[i]);

	printf("\nAutoFunction is adding:\n");
	for(int i = 0; i <= 2; i++)
        printf("array2[%d]=%d", i, a[i] += 5);
}
