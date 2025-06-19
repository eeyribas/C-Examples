#include <stdio.h>
#include <conio.h>

int main()
{
	int width, height;
	printf("Enter width = ");
	scanf("%d", &width);
	printf("Enter height = ");
	scanf("%d", &height);

	int interval = 5;
	int result = ((width + height) * 2) / interval;
	printf("Calculation = %d", result);
	printf("\nRectangular Field = %d", (width * height));

	getch();
	return 0;
}
