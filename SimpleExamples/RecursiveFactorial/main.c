#include <stdio.h>
#include <conio.h>

long Factorial(long);

int main()
{
	for (int i = 1; i <= 15; i++)
        printf("%2d! = %ld\n", i, Factorial(i));

	getch();
	return 0;
}

long Factorial(long number)
{
	if (number <= 1)
        return 1;
	else
        return (number * Factorial(number - 1));
}
