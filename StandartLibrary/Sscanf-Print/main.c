#include<stdio.h>
#include<conio.h>

int main()
{
	char s[]="31298 87.375";
	int x;
	double y;

	sscanf(s, "%d%lf", &x, &y);
	printf("%s\n%s%6d\n%s%8.3f\n", "s value stored in string:", "integer: ", x, "double:", y);

	getch();
	return 0;
}
