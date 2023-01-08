#include<stdio.h>
#include<conio.h>

size_t Size(float *);

int main()
{
	float array[20];
	printf("Array length : %d""\nMethods array length : %d\n", sizeof(array), Size(array));

	getch();
	return 0;
}

size_t Size(float *a)
{
	return sizeof(a);
}
