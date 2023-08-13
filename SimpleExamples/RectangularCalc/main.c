#include <stdio.h>
#include <conio.h>

int main()
{
	int width, height;
	int interval = 5;
	printf("Enter width=");
	scanf("%d", &width);
	printf("Enter height=");
	scanf("%d", &height);

	int result=((width + height) * 2) / interval;
	printf("Calc=%d", result);
	printf("\nRectangular Field=%d", (width * height));

	getch();
	return 0;
}
