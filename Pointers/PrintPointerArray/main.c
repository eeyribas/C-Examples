#include <stdio.h>
#include <conio.h>

void Display(int *p)
{
	for(int i = 0; p[i] != -1; ++i)
        printf("%d\t\t", p[i]);
}

int main()
{
	int a[7] = {2, 5, 76, 1, 4, -1, 12};
	Display(a);

	getch();
	return 0;
}
