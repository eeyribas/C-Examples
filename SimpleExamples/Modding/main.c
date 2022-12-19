#include<stdio.h>
#include<conio.h>

int Multiple(int, int);

int main()
{
	int a, b;
	printf("Enter first number=");
	scanf("%d", &a);
	printf("Enter second number=");
	scanf("%d", &b);
	printf("Answer=%d",Multiple(a, b));

	getch();
	return 0;
}

int Multiple(int a, int b)
{
	if(b % a == 0)
		return 1;
	else
        return 0;
}
