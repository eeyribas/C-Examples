#include <stdio.h>
#include <conio.h>

int main()
{
	int celc;
	printf("Celcius = ");
	scanf("%d", &celc);

	float fahr = (9 * celc) / 5 + 32;
	printf("\nFahrenent = %f", fahr);

	getch();
	return 0;
}
