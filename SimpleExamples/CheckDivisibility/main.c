#include <stdio.h>
#include <conio.h>

int IsDivisible(int first_number, int second_number);

int main()
{
	int first_number, second_number;
	printf("Enter first number = ");
	scanf("%d", &first_number);
	printf("Enter second number = ");
	scanf("%d", &second_number);
	printf("Answer = %d", IsDivisible(first_number, second_number));

	getch();
	return 0;
}

int IsDivisible(int first_number, int second_number)
{
	if (first_number % second_number == 0)
		return 1;
	else
        return 0;
}
