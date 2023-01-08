#include<stdio.h>
#include<conio.h>

int main()
{
	int celc;
	float fahr;
	printf("Celcius = ");
	scanf("%d", &celc);

	fahr=(9*celc)/5+32;
	printf("\nFahrenent = %f", fahr);

	getch();
	return 0;

}
