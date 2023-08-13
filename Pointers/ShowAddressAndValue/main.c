#include <stdio.h>
#include <conio.h>

int main()
{
	int *a_ptr;
	int a = 7;
	a_ptr = &a;
	printf("a address : %p""\n*aPtr address : %p", &a, a_ptr);
	printf("\n\na value : %d""\n*aPtr value : %d", a, *a_ptr);
	printf("\n\n* = &.\n&*aPtr=%p""\n*&aPtr=%p\n", &*a_ptr, *&a_ptr);

	getch();
	return 0;
}
