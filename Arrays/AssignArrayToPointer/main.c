#include <stdio.h>
#include <conio.h>

int main()
{
	int alpha[5] = {12, 13, 2, 34, 32};
	int *ptr = &alpha[0];

	printf("%d\n", *(ptr + 2));
	printf("%d\n", *ptr + 2);
	printf("%d\n", *alpha + 2);
	printf("%d\n", (ptr + 2) - ptr);
	printf("%d\n", *(alpha + 2));
	printf("%d\n", alpha);
	printf("%d\n", &ptr);

	getch();
	return 0;
}
