#include<stdio.h>
#include<conio.h>

int main(){
	int b[]={10, 20, 30, 40};
	int *bPtr=b;
	int i, offset;

	printf("Raw\n");
	for(i=0; i<4; i++)
		printf("b[%d]=%d\n", i, b[i]);

	printf("\nOffset\n");
	for(offset=0; offset<4; offset++)
		printf("*(b+%d)=%d\n", offset, *(b+offset));

	printf("\nPointer\n");
	for(i=0; i<4; i++)
		printf("bPtr[%d]=%d\n", i, bPtr[i]);

	printf("\nOffset\n");
	for(offset=0; offset<4; offset++)
		printf("*(bPtr+%d)=%d\n", offset, *(bPtr+offset));

	getch();
	return 0;
}
