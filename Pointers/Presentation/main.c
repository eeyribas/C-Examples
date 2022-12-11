#include<stdio.h>
#include<conio.h>

int main(){
	int a;
	int *aPtr;

	a=7;
	aPtr=&a;

	printf("a address : %p""\n*aPtr address : %p", &a, aPtr);
	printf("\n\na value : %d""\n*aPtr value : %d", a, *aPtr);
	printf("\n\n* = &.\n&*aPtr=%p""\n*&aPtr=%p\n", &*aPtr, *&aPtr);

	getch();
	return 0;
}
