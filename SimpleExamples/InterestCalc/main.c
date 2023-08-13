#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	double money = 1000.0, ratio = 0.5, amount;
	printf("%4s%21s\n", "Year", "Amount");

	for(int year = 1; year <= 10; year++){
		amount = money * pow(1.0 + ratio, year);
		printf("%3d%21.2f\n", year, amount);
	}

	getch();
	return 0;

}
