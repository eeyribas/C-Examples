#include<stdio.h>
#include<conio.h>

int main()
{
	int array[10]={1,23,23,23,12,11,1,23,21,34};
	int i;
	printf("%s%13s\n", "Element", "Value");

	for(i=0; i<=9; i++){
        printf("%6d%14d\n", i, array[i]);
	}

	getch();
	return 0;
}
