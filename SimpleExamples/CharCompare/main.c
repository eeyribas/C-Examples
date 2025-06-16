#include <stdio.h>
#include <conio.h>

int main()
{
	char c;
	printf("Enter char = ");
	scanf("%c", &c);

	if (c == 'A')
        printf("Compare.\n");
	else
        printf("Not compare.\n");
	printf("Exit!...");

	getch();
	return 0;
}
