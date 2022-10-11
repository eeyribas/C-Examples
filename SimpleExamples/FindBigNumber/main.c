#include<conio.h>
#include<stdio.h>

int FindMax(int, int, int);

int main(){
	int a, b, c;

	printf("Enter three integers = ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Max integer = %d ", FindMax(a, b, c));

	getch();
	return 0;
}

int FindMax(int x, int y, int z)
{
	int max=x;
	if(y>max) max = y;
	if(z>max) max = z;

	return max;
}
