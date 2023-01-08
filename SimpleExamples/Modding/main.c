#include<stdio.h>
#include<conio.h>

int Mode(int, int);

int main()
{
	int a, b;
	printf("Enter first number=");
	scanf("%d", &a);
	printf("Enter second number=");
	scanf("%d", &b);
	printf("Answer=%d", Mode(a, b));

	getch();
	return 0;
}

int Mode(int a, int b)
{
	if(b % a == 0)
		return 1;
	else
        return 0;
}
