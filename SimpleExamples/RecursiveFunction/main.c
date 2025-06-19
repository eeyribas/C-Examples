#include <stdio.h>
#include <conio.h>

int Method(int number_1, int number_2);

int main()
{
	int number_1, number_2;
	printf("Enter two numbers = ");
	scanf("%d %d", &number_1, &number_2);
	printf("Result = %d\n", Method(number_1, number_2));

	getch();
	return 0;
}

int Method(int number_1, int number_2)
{
	if (number_2 == 1)
        return number_1;
	else
        return number_1 + Method(number_1, number_2 - 1);
}
