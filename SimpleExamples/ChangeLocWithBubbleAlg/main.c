#include<stdio.h>
#include<conio.h>

#define SIZE 10

void Bubble(int*, const int);

int main()
{
	int a[SIZE]={2,12,3,43,34,33,55,56,1,25};
	int i;

	printf("Datas\n");
	for(i=0; i<SIZE; i++)
		printf("%d ", a[i]);

	Bubble(a, SIZE);
	printf("\nIncrease\n");
	for(i=0; i<SIZE; i++)
		printf("%4d", a[i]);
	printf("\n");

	getch();
	return 0;
}

void Bubble(int *a, int b)
{
	void ChangeLocation(int *, int*);
	int tour, j;
	for(tour=0; tour<SIZE; tour++)
		for(j=0; j<SIZE; j++)
			if(a[j]>a[j+1])
				ChangeLocation(&a[j], &a[j+1]);
}

void ChangeLocation(int *a, int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
