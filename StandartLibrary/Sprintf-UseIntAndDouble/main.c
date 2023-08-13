#include <stdio.h>
#include <conio.h>

int main()
{
	char s[80];
	int x;
	double y;
	printf("Enter values = ");
	scanf("%d %lf", &x, &y);
	sprintf(s, "Int:%6d\nDouble:%8.2f", x, y);
	printf("%s\n%s\n", "s array : ", s);

	getch();
	return 0;
}
