#include<stdio.h>
#include<conio.h>

#define SIZE 10

int main()
{
	int array[SIZE]={23,12,43,2,89,12,13,14,54,10};
	int j, i, sum=0;

	for(j=0; j<SIZE; j++)
        sum += array[j];
	printf("%s%13s\n", "Element", "Value");

	for(i=0; i<SIZE; i++)
        printf("%6d%13d\n", i, array[i]);
	printf("Sum=%d", sum);

	getch();
	return 0;
}
