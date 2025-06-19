#include <stdio.h>
#include <conio.h>

long Fibonacci(long);

int main()
{
	long number;
	printf("Enter number = ");
	scanf("%ld", &number);

	long result = Fibonacci(number);
	printf("Fibonacci(%ld) = %ld\n", number, result);

	getch();
	return 0;
}

long Fibonacci(long n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}
