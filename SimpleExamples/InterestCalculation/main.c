#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	printf("%4s%21s\n", "Year", "Amount");

	double money = 1000.0, ratio = 0.5;
	for (int year = 1; year <= 10; year++) {
        double amount = money * pow(1.0 + ratio, year);
		printf("%3d%21.2f\n", year, amount);
	}

	getch();
	return 0;
}
