#include<stdio.h>
#include<conio.h>

int Method(int, int);

int main()
{
	int x, y;
	printf("Enter two numbers=");
	scanf("%d %d", &x, &y);
	printf("Result=%d\n", Method(x, y));
	getch();

	return 0;
}

int Method(int a, int b)
{
	if(b==1)
        return a;
	else
        return a + Method(a, b-1);
}
